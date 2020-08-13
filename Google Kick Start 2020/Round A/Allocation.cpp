#include<iostream>
#include<algorithm>
#include<fstream>
#include<ostream>
using namespace std;

//#define InputOutputToFile

int main()
{
#ifdef InputOutputToFile

    //cin redirection
    std::ifstream fin("cin.txt");
    std::streambuf* inbuf = std::cin.rdbuf(fin.rdbuf());

    //cout redirection
    std::streambuf* cout_sbuf = std::cout.rdbuf(); // save original sbuf
    std::ofstream   fout("cout.txt");
    std::cout.rdbuf(fout.rdbuf()); // redirect 'cout' to a 'fout'
    //std::cout.rdbuf(cout_sbuf); // restore the original stream buffer
#endif

    int test_cases;
    cin >> test_cases;
    int tc = 1;

    while (test_cases > 0) {
        
        int N;
        cin >> N;
        int budget;
        cin >> budget;
        int* prices_house;
        prices_house = (int*)malloc(N * sizeof(int));
         
        if (!prices_house) {
            cout << "Couldn't allocate memory" << endl;
            exit(1);
        }
        //taking input from user for prices of N
        //number of houses
        for (int i = 0; i < N; i++) {
            cin >> prices_house[i];
        }

        //sorting the array of prices
        sort(prices_house, prices_house + N);
        /*
        for (int i = 0; i < N; i++) {
            cout << prices_house[i] << " ";
        }
        cout << endl;
        */

        int sum = 0, num_of_houses = 0;
        //iterating over the prices to find number of houses
        for (int i = 0; i < N; i++) {
            sum += prices_house[i];
            //cout << "house taken::" << i << endl;
            if (sum <= budget) {
                num_of_houses++;
            }
            else {
                break;
            }
            /*if (budget >= prices_house[i])
            {
                budget =- prices_house[i];
                num_of_houses++;
            }*/
        }
        
        cout << "Case #" << tc << ": " << num_of_houses <<endl;
        test_cases--;
        tc++;
        

    }
    return 0;
}
