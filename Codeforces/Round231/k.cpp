    #include <iostream>
    #include <vector>
    #include <string>
     
    using namespace std;
     
    bool count (vector <int>& num, int k) {
    int n = num.size ();
    num [n - 2] = num [n - 1] * k % 10;
    for (int i = n - 3; i >= 0; --i) {
    num [i] = (num [i + 1] * k + num [i + 2] * k / 10) % 10;
    }
    return (num [n - 1] == num [1] * k / 10 + num [0] * k);
    }
     
    int main(int argc, char const *argv[])
    {
    int n, k;
    cin >> n >> k;
    bool b = false;
    vector <int> num (n);
    for (int i = 1; i <= 9; ++i) {
    num.back () = i;
    if (count (num, k)) {
    b = true;
    break;
    }
    }
    if (b) {
    for (int i = 0; i < n; ++i) {
    cout << num [i];
    }
    }
    else
    cout << "Impossible";
    return 0;
    }
