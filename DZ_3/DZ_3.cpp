#include <iostream>
using namespace std;

int main()
{
    //1
    double S, v;
    cout << "Enter S: ";
    cin >> S;
    cout << "Enter v: ";
    cin >> v;
    double t = S / v;
    cout << "Was on the way = " << t << " h";
    cout << " = " << t * 60 << " m";
    cout << " = " << t * 3600 << " s" << "\n\n";
    

    //2
    double a, b;
    cout << "Enter namber a: ";
    cin >> a;
    cout << "Enter namber b: ";
    cin >> b;
    int res1 = (int)a + (int)b;
    cout << "Sum of integers = " << res1 << "\n";
    int res2 = ((int)(a*100) % 100) + ((int)(b*100) % 100);
    cout << "Sum of fractional parts = " << res2 << "\n\n";
    

    //3
    double uah;
    cout << "Enter namber uah: ";
    cin >> uah;
    int intUah = ((int)uah * 100) / 100;
    int frUah = (int)(uah * 100) % 100;
    cout << "Uah = " << intUah << "\n";
    cout << "Coins = " << frUah << "\n\n";
    

    //4
    int second;
    cout << "Enter seconds: ";
    cin >> second;
    int hour = (int)(second / 3600);
    cout << "Hours = " << hour << "\n";
    int min = (int)(second % 3600) / 60;
    cout << "Minutes = " << min << "\n";
    int sec = second - (hour*3600+min*60);
    cout << "Seconds = " << sec << "\n\n";
    

    //5
    double sKm;
    cout << "Enter S in km: ";
    cin >> sKm;
    double tMin;
    cout << "Enter t in min: ";
    cin >> tMin;
    double vKmph = sKm / (tMin / 60);
    cout << "v = " << vKmph << "\n\n";
    

    //6
    double thStart, thEnd, tmStart, tmEnd, tsStart, tsEnd;
    cout << "Enter start time h: ";
    cin >> thStart;
    cout << "Enter start time m: ";
    cin >> tmStart;
    cout << "Enter start time s: ";
    cin >> tsStart;
    cout << "Enter end time h: ";
    cin >> thEnd;
    cout << "Enter end time m: ";
    cin >> tmEnd;
    cout << "Enter end time s: ";
    cin >> tsEnd;
    double resulth = (thEnd - thStart) * 60 * 15;
    double resultm = (tmEnd - tmStart) * 15;
    double results = (tsEnd - tsStart) * (15 / 60);
    double result = (resulth + resultm + results) / 100;
    cout << "UAH = " << result << "\n\n";
    

    //7
    int timeWork;
    cout << "Enter time in seconds: ";
    cin >> timeWork;
    int leftTime = 8 - (timeWork / 3600);
    cout << leftTime;
    

    //8
    double prise, num, disc;
    cout << "Enter price: ";
    cin >> prise;
    cout << "Enter number of laptops: ";
    cin >> num;
    cout << "Enter discount: ";
    cin >> disc;
    double sum = num * (prise - (prise * (disc / 100)));
    cout << "Sum = " << sum << "\n\n";

}


