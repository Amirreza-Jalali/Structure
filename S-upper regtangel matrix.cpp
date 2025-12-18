#include "/Users/apple/Desktop/computer/bits.cpp"
using namespace std;

void upper_matrix(int matrix[][3], int row, int col)
{
	int i, j;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i > j)
			{
				cout << "0" <<"\t";
			}
			else
			cout << matrix[i][j] <<"\t";
            cout<<"\t";
		}
		cout << endl;
    
	}
}
int main()
{
	int matrix[3][3] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};
	int row = 3, col = 3;
	
	cout << "bala mosalasi matrix: \n";
	upper_matrix(matrix, row, col);
		
	return 0;
}

