#include <iostream>

//zad 1
void swap(int& n, int& m);
void doubleSwap(double& n, double& m);
void deleteIndex(int& n, int k);
void reverseNumber(int& n);
int howManyNumbers(int n);
void separateNumbers(int n);


int main() {

    //proverkaa za swap
    /*int n = 10;
    int m = 15;
    swap(n, m);
    std::cout << n << " " << m;*/

    //proverkaa za doubleSwap
    /*double n = 10.0;
    double m = 15.0;
    doubleSwap(n, m);
    std::cout << n << " " << m;*/

    //proverka za deleteIndex
    /*int n = 0;
    size_t k = 1;
    std::cin >> n >> k;
    deleteIndex(n, k);
    std::cout << n;*/

    //proverka za separateNumbers
    int n = 0;
    std::cin >> n;
    separateNumbers(n);



    return 0;
}

void swap(int& n, int& m) {

    int temp = n;
    n = m;
    m = temp;

}

void doubleSwap(double& n, double& m) {

    double temp = n;
    n = m;
    m = temp;

}

void deleteIndex(int& n, int k) {

    int newN = 0;
    int p = howManyNumbers(n);

    int temp = n;
    int br = 0;
    while (temp != 0) {

        br++;
        if (br != k) {

            int d = temp % 10;
            newN = 10 * newN + d;

        }
        temp /= 10;


    }
    reverseNumber(newN);
    n = newN;


}

void reverseNumber(int& n) {

    int temp = 0;
    while (n != 0) {

        int d = n % 10;
        temp = 10 * temp + d;
        n /= 10;

    }
    n = temp;

}

int howManyNumbers(int m) {

    int br = 0;
    while (m != 0) {

        br++;
        m /= 10;

    }
    return br;

}

void separateNumbers(int n) {

    int temp1 = 0;
    int temp2 = 0;
    while (n != 0) {

        int d = n % 10;
        if (d % 2 == 0) {

            temp1 = temp1 * 10 + d;

        }
        else {

            temp2 = temp2 * 10 + d;

        }
        n /= 10;
        //zashto samo temp2 se preobrushta
        reverseNumber(temp1);
        reverseNumber(temp2);

    }
    std::cout << temp1 << std::endl << temp2;

}
