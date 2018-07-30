# Lanczos

Simple implementation of the Lanczos Algorithm in C.

Do make and ./lanczos path to matrix file Paramter k
eg: 
make
./lanczos ../matrix/matrix5 10

returns tridiagonal matrix, whoms diagonal and subdiagonal entrys are stored in result file (first two rows) and matrix V which is created through k vectors who are used to calculate the tridiagonal matrix.
Now you can calculate k eigenvalues of matrix5 through calculating eigenvalues of the tridiagonal matrix (Without calculating eigenvalues of matrix5 directly, which is very time-consuming).

