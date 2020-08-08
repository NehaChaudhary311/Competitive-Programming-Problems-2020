/*
The median of a list of numbers is essentially it's middle element after sorting. 
The same number of elements occur after it as before. Given a list of numbers with an odd number of elements, can you find the median?

SAMPLE INPUT : 
7
0 1 2 4 6 5 3

SAMPLE OUTPUT:
3

EXPLANATION :
Sorted array = [0,1,2,3,4,5,6] Middle element, arr[3] = 3

*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the findMedian function below.
int findMedian(vector<int> arr) {
    int size_of_vect = arr.size();
    
    sort(arr.begin(), arr.end());
    if(size_of_vect %2 == 0)
        return arr[size_of_vect/2 -1];
    else
        return arr[size_of_vect/2];


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = findMedian(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
