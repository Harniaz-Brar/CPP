// PATTERN-1 ************************************************************************

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout << "*" ;
            j = j+1;
        }
        cout << endl;

        i = i+1;

    }
}
*/

//PATTERN-2 ****************************************************************************

/*
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while(i<=n)
    {
        int j =1;
        while(j<=n)
        {
            cout << i;
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }
}

*/

// PATTERN-3 ****************************************************************************
/*
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while(i<=n) {
        int j = i;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
 */

// PATTERN-4 ******************************************************************************
/*
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while(i<=n) {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
 */

// PATTERN-5 *********************************************************************************

/*
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    while(i<=n) {
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
*/

// PATTERN-6 ******************************************************************************

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int count = 1;
    cin >> n;
    while(i<=n)
    {
        int j = 1;

        while(j <= n)
        {
            cout << count ;
            count = count +1;
            j = j +1;
        }
        cout << endl;
        i = i +1;

    }
}
*/



















