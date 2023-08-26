#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int mutex = 1, full = 0, empty = 0, x = 0;

int wait(int s) { return --s; }
int signal(int s) { return ++s; }
void producer()
{
    mutex = wait(mutex);
    full = signal(full);
    empty = wait(empty);
    x++;
    printf("\nProducer just produced the item no. %d", x);
    mutex = signal(mutex);
}
void consumer()
{
    mutex = wait(mutex);
    full = wait(full);
    empty = signal(empty);
    printf("\nConsumer just consumed the item no. %d", x);
    x--;
    mutex = signal(mutex);
}

int main()
{
    int n;
    printf("Kindly entire the required buffer size : ");
    scanf("%d", &empty);
    printf("\n1.Produce a new item\n2.Consume an item\n3.Exit");
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            if ((mutex == true) && (empty != 0))
                producer();
            else
                printf("No Space ! The Buffer is full.");
            break;
        case 2:
            if ((mutex == true) && (full != 0))
                consumer();
            else
                printf("Nothing to consume ! Buffer is empty!!");
            break;
        case 3:
            printf("Exiting");
            exit(0);
            break;
        default:
            printf("Wrong choice ! Kindly try again.");
        }
        printf("\n");
    }
    return 0;
}
