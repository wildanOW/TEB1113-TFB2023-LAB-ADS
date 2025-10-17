#include <iostream>
void findPeak(int matrix[][3], int rows, int cols)
{
    int count = 0;
    int array[9];
    int size = rows * cols;
    int maxVal = matrix[0][0];
    int maxRow = 0;
    int maxCol = 0;
    
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    
    std::cout << "Max value: " << maxVal << "\n";
    std::cout << "Position: [" << maxRow << ", " << maxCol << "]" ;
    
};


int main()
{
    int mat[][3] = {{5,4,7},
                   {10,3,8},
                   {2,9,2}};
                   
    findPeak(mat, 3, 3);
}