#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class matrix {
    int rows, cols;
    int **mat;

public:
    matrix(int r, int c) : rows(r), cols(c) {
    mat = new <FIX ME>; // allocate memory to store pointers to rows of ints
    for (int i=0; i < rows; i++)
        mat[i] = new <FIX ME>; // Each row pointer points to new memory for row of ints
    }
    ~matrix() {
        for (int i=0; i < rows; i++)
            delete[] mat[i];
        delete[] mat;
}
matrix(const matrix& from) { // copy constructor doing deep copy
    cout << "(Deep) copy constructor is called" << endl;
    rows = from.rows;
    cols = from.cols;
    mat = new <FIX ME>;
    for (int i=0; i < rows; i++)
        mat[i] = new <FIX ME>;

    // copy matrix values from "from" matrix using nested for loop
    <<FIX ME>>
}
void initialize() {
    cout << "Enter values of matrix row wise, separated by space and each row on new line:" <<endl;
    // read values from keyboard into matrix
    <<FIX ME>>

}
void print() const { // this function would not modify the object itself
    cout << "Matrix:" << endl;
    for (int i=0; i < rows; i++) {
        for (int j=0; j < cols; j++)
            cout << setw(4) << mat[i][j];
        cout << endl;
    }
}
matrix multiply(matrix m2) const { // doesn't modify object calling this fn
    matrix m3(<FIX ME>);

    for (int i=0; i < rows; i++) {
        for (int j=0; j < m2.cols; j++) {
            m3.mat[i][j] = 0;
            // multiple a row from mat with a col from m2 to get a cell (m3[i][j])
            for (int k=0; k < cols; k++)
                m3.mat[i][j] += mat[i][k] * m2.mat[k][j];
         }
    }
    return <FIX ME>;
}
};

int main() {
    int r1, c1, r2, c2;
    cout << "Enter the # of rows and cols in 1st matrix:";
    cin >> r1 >> c1;
    cout << "Enter the # of rows and cols in 2nd matrix:";
    cin >> r2 >> c2;

    matrix m1(r1,c1), m2(r2,c2);
    m1.initialize();
    m1.print();
    m2.initialize();
    m2.print();

    matrix m3 = m1.multiply(m2); // copy constructor is invoked when m2 is passed by value to multiply().
    // no copy constructor is invoked when m3 = is executed due to return value optimization.
    cout << "Resultant matrix:" << endl;
    m3.print();
}
