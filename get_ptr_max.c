// ============================================================================
// File: get_ptr_max.c (Spring 2018)
// ============================================================================
// Programmer: Jennifer King
// Date: 4/3/2018
// Project: Get Ptr Max
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//  This program demonstrates how a called function can manipulate a caller's
//  pointer argument. The main function gets two integer values from the user at
//  the keyboard, then passes the addresses of those variables as arguments to
//  the GetPtrMax function, along with the address to a local pointer to an int.
//  The GetPtrMax function will determine which integer value has the greater
//  value, then set the caller's pointer to an int to point to the greater int
//  value. However, if the integer values are equal, the caller's pointer is set
//  to NULL.
// ============================================================================

#include    <stdio.h>
#include    <stdlib.h>


// function prototypes
void GetPtrMax(int v1, int v2, int **ptr);


// ==== main ==================================================================
//
// ============================================================================

int main(void)
{
    auto    int         intOne;
    auto    int         intTwo;
    auto    int         *intPtr;

    // prompt and get two ints from the user
    printf("Enter intOne: ");
    scanf("%d", &intOne);
    printf("Enter intTwo: ");
    scanf("%d", &intTwo);

    // set the local pointer to point to the int with the maximum value
    GetPtrMax(intOne, intTwo, &intPtr);

    // display the result
    if (NULL == intPtr)
        {
        puts("The values entered are equal.");
        }
    else
        {
        printf("The greater value entered was %d\n", *intPtr);
        }

    return 0;

}  // end of 'main'



// ==== GetPtrMax =============================================================
//
// ============================================================================

void GetPtrMax(int v1, int v2, int **ptr)
{
    if(v1 > v2)
    {
        *ptr = &v1;
    }
    else if(v1 < v2)
    {
        *ptr = &v2;
    }
    else if(v1 == v2)
    {
        *ptr = NULL;
    }
    else
    {
        puts("Error reading ints.");
    }

}  // end of "GetPtrMax"
