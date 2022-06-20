#include <bits/stdc++.h> 
using namespace std;

pair<string, int> findEntryWithLargestValue(map<string, int> sampleMap)
{
  
    pair<string, int> entryWithMaxValue
        = make_pair(" ", 0);
  
    map<string, int>::iterator currentEntry;
    for (currentEntry = sampleMap.begin();
         currentEntry != sampleMap.end();
         ++currentEntry) {
  
        if (currentEntry->second
            > entryWithMaxValue.second) {
  
            entryWithMaxValue
                = make_pair(
                    currentEntry->first,
                    currentEntry->second);
        }
        else if (currentEntry->second
            == entryWithMaxValue.second) {
  
            if (currentEntry->first
            > entryWithMaxValue.first) {
  
                entryWithMaxValue
                    = make_pair(
                        currentEntry->first,
                        currentEntry->second);
            }
        }
        
    }
  
    return entryWithMaxValue;
}


string largestWordCount(vector<string>& messages, vector<string>& senders) {

    vector<int> wc;

    for(auto x : messages){
        stringstream check1(x);
        string intermediate;
        int count = 0;
        while(getline(check1, intermediate, ' '))
        {
            count++;
        }
        wc.push_back(count);
    }

    map<string, int> senderMap;

    for(auto x : senders){
        senderMap[x] = 0;
    }

    int controlVar = 0;

    for(auto x : senders){
        senderMap[x] = senderMap[x] + wc.at(controlVar);
        controlVar++;
        cout << "Entry with highest value: "
         << x << " = "
         << senderMap[x] << endl;
    }
    pair<string, int> entryWithMaxValue
        = findEntryWithLargestValue(senderMap);
    
    return entryWithMaxValue.first;

}