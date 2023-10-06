#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int date;
        string month;
        cin >> date >> month;
        if (month == "Mar")
        {
            if (date >= 21 && date <= 31)
                cout << "Aries";
            else
                cout << "Pisces";
        }
        if (month == "Apr")
        {
            if (date >= 1 && date <= 20)
                cout << "Aries";
            else
                cout << "Taurus";
        }
        if (month == "May")
        {
            if (date >= 21 && date <= 31)
                cout << "Gemini";
            else
                cout << "Taurus";
        }
        if (month == "Jun")
        {
            if (date >= 1 && date <= 21)
                cout << "Gemini";
            else
                cout << "Cancer";
        }
        if (month == "Jul")
        {
            if (date >= 1 && date <= 22)
                cout << "Cancer";
            else
                cout << "Leo";
        }
        if (month == "Aug")
        {
            if (date >= 1 && date <= 22)
                cout << "Leo";
            else
                cout << "Virgo";
        }
        if (month == "Sep")
        {
            if (date >= 1 && date <= 21)
                cout << "Virgo";
            else
                cout << "Libra";
        }
        if (month == "Oct")
        {
            if (date >= 1 && date <= 22)
                cout << "Libra";
            else
                cout << "Scorpio";
        }
        if (month == "Nov")
        {
            if (date >= 1 && date <= 22)
                cout << "Scorpio";
            else
                cout << "Sagittarius";
        }
        if (month == "Dec")
        {
            if (date >= 1 && date <= 21)
                cout << "Sagittarius";
            else
                cout << "Capricorn";
        }
        if (month == "Jan")
        {
            if (date >= 1 && date <= 20)
                cout << "Capricorn";
            else
                cout << "Aquarius";
        }
        if (month == "Feb")
        {
            if (date >= 1 && date <= 19)
                cout << "Aquarius";
            else
                cout << "Pisces";
        }
        cout << endl;
    }
    return 0;
}