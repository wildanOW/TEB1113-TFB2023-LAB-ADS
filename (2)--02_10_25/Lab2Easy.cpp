// Easy: Sort the matrix 
#include <iostream>

void sortMatrix(int matrix[][3], int rows, int cols)
{
    int count = 0;
    int array[9];
    int size = rows * cols;
    
    for(int i=0;i<rows;i++)
    {

        for(int j=0;j<cols;j++)
        {
            
            array[count] = matrix[i][j];
            count ++;
        }
    }
    
    int temp;
    for(int i = 0; i<size-1; i++)
    {
        for(int j = 0; j<size-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    count = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            matrix[i][j] = array[count];
            count++;
        }
    }
    
     for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            std::cout << matrix[i][j]; 
        }
        
        std::cout << "\n";
    }
    
    
};


int main()
{
    int mat[][3] = {{5,4,7},
                   {1,3,8},
                   {2,9,6}};
                   
    sortMatrix(mat, 3, 3);
}