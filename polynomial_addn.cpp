#include <iostream>
using namespace std;

// Structure to represent a single term of a polynomial
struct Term {
    int coefficient;
    int exponent;
};

// Function to add two polynomials
void addPolynomials(Term poly1[], int size1, Term poly2[], int size2) {
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (poly1[i].exponent == poly2[j].exponent) {
            int sumCoeff = poly1[i].coefficient + poly2[j].coefficient;
            if (sumCoeff != 0) {
                cout << sumCoeff << "x^" << poly1[i].exponent << " ";
            }
            i++;
            j++;
        } else if (poly1[i].exponent > poly2[j].exponent) {
            cout << poly1[i].coefficient << "x^" << poly1[i].exponent << " ";
            i++;
        } else {
            cout << poly2[j].coefficient << "x^" << poly2[j].exponent << " ";
            j++;
        }
    }

    // Add remaining terms of poly1
    while (i < size1) {
        cout << poly1[i].coefficient << "x^" << poly1[i].exponent << " ";
        i++;
    }

    // Add remaining terms of poly2
    while (j < size2) {
        cout << poly2[j].coefficient << "x^" << poly2[j].exponent << " ";
        j++;
    }
}

int main() {
    int size1, size2;

    cout << "Enter the number of terms in the first polynomial: ";
    cin >> size1;

    Term poly1[size1];
    cout << "Enter the coefficients and exponents for the first polynomial:\n";
    for (int i = 0; i < size1; i++) {
        cin >> poly1[i].coefficient >> poly1[i].exponent;
    }

    cout << "Enter the number of terms in the second polynomial: ";
    cin >> size2;

    Term poly2[size2];
    cout << "Enter the coefficients and exponents for the second polynomial:\n";
    for (int i = 0; i < size2; i++) {
        cin >> poly2[i].coefficient >> poly2[i].exponent;
    }

    cout << "Result of polynomial addition: ";
    addPolynomials(poly1, size1, poly2, size2);

    return 0;
}
