/* #include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double S1 = 0.0, S2 = 0.0;
  
    for (int i = 1; i <= 11; i++) {
        S1 += (pow(-1, i + 1) * (i + 1)) / (pow(i, 2) + 2 * i +7);
    }

    for (int i = 1; i <= 11; i += 1){
        S2 += (pow(-1, i + 1) * (i + 1)) / (pow(i, 2) + 2 * i +7);
    }
    cout << "Обчислення виразу S1 = " << fixed << setprecision(2) << S1 << endl;
    cout << "Обчислення виразу S2 = " << fixed << setprecision(2) << S2 << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
  double cost;
  cout << "Введіть вартість товару: ";
  cin >> cost;

    int discount = (cost > 1000) ? 10 : 5;

    
  
  cout << "Вартість товару після знижки: " << discount << "" << endl;
  cout << " " << finalCost << endl;
  return 0;
    }