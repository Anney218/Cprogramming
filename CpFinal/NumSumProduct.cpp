
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll num;

    // Prompt the user
    cout << "Enter the value: ";
    cin >> num;

    ll temp = num;

    ll power = 0, total_fact = 1, sum_fact = 1, product_fact = 1;
    ll lim = sqrt(num);

    for (ll div = 2; div <= lim; ++div)
    {
        power = 0;
        while (num % div == 0)
        {
            num /= div;
            power++;
        }
        if (power != 0)
        {
            // Formula to find total factors of a number
            total_fact *= (power + 1);

            // Formula to find the sum of all factors of a number
            sum_fact *= (pow(div, power + 1) - 1) / (div - 1);
        }
    }

    if (num > 1)
    {
        total_fact *= 2;
        sum_fact *= (num + 1);
    }

    // Formula to find product of all factors of a number
    product_fact = pow(temp, total_fact / 2);


    cout << "Total factors of " << temp << " = " << total_fact << endl;
    cout << "Sum of factors of " << temp << " = " << sum_fact << endl;
    cout << "Product of factors of " << temp << " = " << product_fact << endl;

    return 0;
}
