#include <stdio.h>   
#include <stdlib.h>  
int array[100], pos; 
int count = 1; 
void Insert()
{
    int element;
start: // labeling
    printf("\n Enter the postion you want to insert in an array\n");
    scanf("%d", &pos);
    if (pos > count) // count:  counts the number of elements in the array
    {
        printf(" please enter valid position");
        goto start;
    }
    else
    {
        printf("\nenter the element to be inserted \n");
        scanf("%d", &element);
        if (count == 1) // 1st element
        {
            array[0] = element;
            count++;
        }
        else
        {
            for (int i = count; i >= pos; i--)
            {
                array[i] = array[i - 1];
            }
            array[pos - 1] = element;
            count++; //count = count+1
        }
        printf("The inserted element is %d\n", element);
        return;
    }
}
void display()
{

    if (count == 1)
    {
        printf("there is no element in the array\n\n");
    }
    else
    {
        printf("\nthe elements int the array:\n");
        for (int i = 0; i < count - 1; i++)
        {
            printf("%d\t", array[i]);
        }
        printf("\n");
        return;
    }
}
int main()
{
    // menu driven program
    int s;
    printf("\n****** Insertion of elements in an array **********\n\n ");
    printf("Choose the Options\n\n");

    // syntax for while loop :
    /* while(1){
     // body
    }
    */
    while (1) // 1 always true, 0 always false
    {
        printf("\n******** Operations *********\n");                               // screen output
        printf("1.Display the array elements\n2.Insert the elements\n3.Exit\n\n"); // screen output
        printf("Enter the option\n");
        scanf("%d", &s); // option number storation
        switch (s)
        {
        case 1:
            display();
            break;
        case 2:
            Insert();
            break;
        case 3:
            printf("EXIT!");
            exit(0); // exit from programs
        default:
            printf("\nInvalid options!\t please select right options 1-3\n");
            break;
        }
    }
    return 0;
}