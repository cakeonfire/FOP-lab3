#include <iostream>
#include <math.h>

using namespace std;


void task_1(void) {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a < b) {
        cout << a << " is smaller than " << b;
    } else if (a > b) {
        cout << a << " is greater than " << b;
    } else {
        cout << "both numbers are equal";
    }

    cout << endl;
}


void task_2(void) {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a < b) {
        cout << a << " is smaller than " << b;
    } else {
        if (a > b) {
            cout << a << " is greater than " << b;
        } else {
            cout << "both numbers are equal";
        }
    }

    cout << endl;
}


void task_3(void) {
    float r;
    cout << "Enter coefficient r: ";
    cin >> r;

    if (r > 1) {
        cout << "Invalid value for r";
        return;
    }

    if (r >= 0.7) {
        cout << "very strong positive correlation";
    } else if (r >= 0.5) {
        cout << "strong positive correlation";
    } else if (r >= 0.3) {
        cout << "moderate positive correlation";
    } else if (r >= 0.2) {
        cout << "weak positive correlation";
    } else {
        cout << "No correlation";
    }

    cout << endl;
}


void task_4(void) {
    float a, b;
    char opr;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter operand (+|-|*|/): ";
    cin >> opr;

    if (opr == '/' && b == 0.0) {
        cout << "Cannot divide by 0!";
        return;
    }

    // validate operation
    switch (opr) {
        case '+':
            cout << "sum: " << a + b;
            break;
        case '-':
            cout << "diff: " << a - b;
            break;
        case '*':
            cout << "product: " << a * b;
            break;
        case '/':
            cout << "quotient: " << a / b;
            break;
        default:
            cout << "Unknown operation for operand " << opr;
    }

    cout << endl;
}


void task_5(void) {
    //for (int i = 0; ; i++) {
    //    cout << i << endl;
    //}

    int i = 0;
    while (1) {
        cout << i << endl;
        i++;
    }

    cout << endl;
}


void task_6(void) {
    float a, b;
    char opr, quit_check;

    while (1) {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter operand (+|-|*|/): ";
        cin >> opr;

        if (opr == '/' && b == 0.0) {
            cout << "Cannot divide by 0!";
            continue;
        }

        // validate operation
        switch (opr) {
            case '+':
                cout << "sum: " << a + b;
                break;
            case '-':
                cout << "diff: " << a - b;
                break;
            case '*':
                cout << "product: " << a * b;
                break;
            case '/':
                cout << "quotient: " << a / b;
                break;
            default:
                cout << "Unknown operation for operand " << opr;
        }
        cout << endl;

        cout << "quit? (y/n): ";
        cin >> quit_check;

        if (quit_check == 'y' || quit_check == 'Y') {
            cout << endl;
            return;
        }
    }
}


void task_7(void) {
    for (int i=0; ; i++) {
        if (i == 200) {
            break;
        }
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    cout << endl;
}


void task_8(void) {
    int n;

    cout << "Enter natural n: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid number!";
        return;
    }

    for (int d=2; d<sqrt(n)+1; d++) {
        if (n % d == 0) {
            cout << n << " has at least one divisor (" << d << ")" << endl;
            break;
        }
    }

    cout << endl;
}


int main(void) {
    //task_1();
    //task_2();
    //task_3();
    //task_4();
    //task_5();
    //task_6();
    //task_7();
    task_8();

    return 0;
}
