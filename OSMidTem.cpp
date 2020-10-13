#include <stdlib.h>
#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

int pageFaults(int pages[], int n, int capacity)
{

    unordered_set<int> s;
    queue<int> indexes;

    int page_faults = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.size() < capacity)
        {
            if (s.find(pages[i]) == s.end())
            {
                s.insert(pages[i]);
                page_faults++;
                indexes.push(pages[i]);
            }
        }

        else
        {
            if (s.find(pages[i]) == s.end())
            {
                int val = indexes.front();
                indexes.pop();
                s.erase(val);
                s.insert(pages[i]);
                indexes.push(pages[i]);
                page_faults++;
            }
        }
    }
    return page_faults;
}

int main()
{
    int pages[20], capacity, choice, n, frameThree, frameFour;

    do
    {
        cout << "\t\tMENU:" << endl;
        cout << "1 : Enter the page reference string" << endl;
        cout << "2 : Enter the number of page frames" << endl;
        cout << "3 : Calculate the number of pages faults" << endl;
        cout << "4 : Check for Belady's Anomaly" << endl;
        cout << "5 : EXIT" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Start entering your page reference string : " << endl;

            for (int i = 0; i < 20; i++)
            {
                cin >> pages[i];
            }
            n = sizeof(pages) / sizeof(pages[0]);
            break;

        case 2:
            cout << "Enter the number of page frames " << endl;
            cin >> capacity;
            break;

        case 3:
            cout << "Number of pages faults : "
                 << " " << pageFaults(pages, n, capacity) << endl;
            break;

        case 4:
            frameThree = pageFaults(pages, n, 3);
            frameFour = pageFaults(pages, n, 4);

            if (frameFour > frameThree)
                cout << "Belady's Anomaly exists" << endl;
            else
                cout << "Belady's Anomaly doesn't exist" << endl;

            break;

        case 5:
            exit(1);
            break;

        default:
            cout << "Invalid input. Please try again" << endl;
            break;
        }

    } while (choice != 5);

    return 0;
}
