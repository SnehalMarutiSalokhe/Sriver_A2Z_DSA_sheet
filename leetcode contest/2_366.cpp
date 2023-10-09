#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
 
  int p=processorTime.size();
  int T=tasks.size();

  sort(processorTime.begin(),processorTime.end());
  sort(tasks.begin(),tasks.end());

    vector<int> max;
        for (int i = 3; i < T; i += 4) {
            max.push_back(tasks[i]);
        }

        int ans = 0;
        int cn = 0;
        for (int i = max.size() - 1; i >= 0; i--) {
            int sum = processorTime[cn] + max[i];
            if (sum > ans)
                ans = sum;
            cn++;
        }

        return ans;
    
}

int main() {
    // Create vectors for processorTime and tasks with sample data
    vector<int> processorTime = {10,20};
    vector<int> tasks = {2,3,1,2,5,8,4,3};

    // Call the minProcessingTime function and store the result
    int minTime = minProcessingTime(processorTime, tasks);

    // Output the minimum processing time
    cout << "Minimum Processing Time: " << minTime << endl;

    return 0;
}
// [10,20]
// [2,3,1,2,5,8,4,3]