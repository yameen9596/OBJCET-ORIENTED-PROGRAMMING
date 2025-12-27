
#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cout << "Enter an expression (Use Spaces): ";
    getline(cin, expr);

    double current = 0, next = 0, result = 0;
    char op = '+';
    string temp = "";
    int i = 0;

    while (i <= expr.length()) {
        char c = expr[i];

      
        if ((c >= '0' && c <= '9') || c == '.') {
            temp += c;
        }

        
        if (c == ' ' || c == '+' || c == '-' || c == '*' || c == '/' || c == '\0') {
            if (temp != "") {
                next = 0;
               
                double val = 0, frac = 0, div = 1;
                bool point = false;
                for (int j = 0; j < temp.length(); j++) {
                    if (temp[j] == '.') {
                        point = true;
                    } else if (!point) {
                        val = val * 10 + (temp[j] - '0');
                    } else {
                        frac = frac * 10 + (temp[j] - '0');
                        div *= 10;
                    }
                }
                next = val + frac / div;
                temp = "";

              
                if (op == '+') result += current; 
                else if (op == '-') result += current;
                
                current = next;
            }

            if (c == '+' || c == '-' || c == '*' || c == '/') {
                if (c == '*' || c == '/') {
                    
                    double nextNum = 0;
                    string num = "";
                    i++;
                    while (i < expr.length() && expr[i] == ' ') i++;
                    while (i < expr.length() && ((expr[i] >= '0' && expr[i] <= '9') || expr[i] == '.')) {
                        num += expr[i];
                        i++;
                    }
                    double val = 0, frac = 0, div = 1;
                    bool point = false;
                    for (int j = 0; j < num.length(); j++) {
                        if (num[j] == '.') point = true;
                        else if (!point) val = val * 10 + (num[j] - '0');
                        else {
                            frac = frac * 10 + (num[j] - '0');
                            div *= 10;
                        }
                    }
                    nextNum = val + frac / div;

                    if (c == '*') current = current * nextNum;
                    else if (c == '/') current = (nextNum != 0) ? current / nextNum : 0;
                    continue;
                } else {
                    
                    op = c;
                }
            }
        }
        i++;
    }

    result += current;

    cout << "Result = " << result << endl;
    cout << "Result type: double (after promotion)\n";

    return 0;
}

