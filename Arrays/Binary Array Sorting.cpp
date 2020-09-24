vector<int> SortBinaryArray(vector<int> binArray)
{
    // Your code goes here ]
    int j = -1;
    for(int i = 0; i<binArray.size(); i++){
        if(binArray[i] < 1){
            j++;
            swap(binArray[i], binArray[j]);
        }
    }
    return binArray;
}
