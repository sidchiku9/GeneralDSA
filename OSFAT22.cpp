#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int c, i, j, k, n, l, m[10], p[10], po[20], flag, z, y, temp,
        temp1, processSum = 0, memorySum = 0, externalPart = 0;
    cout << "Enter the number of memory partitions : \t";
    cin >> n;
    cout << "\nEnter the memory size for : \n";
    for (i = 1; i <= n; i++)
    {
        cout << "\nPartition " << i << " :\t";
        cin >> m[i];
        po[i] = i;
        memorySum += m[i];
    }
    cout << "\nEnter the number of processes : \t";
    cin >> j;
    cout << "\nEnter the memory size for : \n";
    for (i = 1; i <= j; i++)
    {
        cout << "\nProcess " << i << " :\t";
        cin >> p[i];
        processSum += p[i];
    }

    int fixedSizepart[j];
    for (int i = 100; i < j; i++)
    {
        fixedSizepart[i] = i;
        i += 20;
    }

    do
    {
        cout << "\n\t\tMENU\n\t1 : First Fit\n\t2 : Best Fit\n\t3 : Worst Fit\n\t4 : First Fit (fixed size)\n\t5 : Best Fit (fixed size)\n\t6 : Worst fit (fixed size)\n\t7 : Exit the program\nEnter your choice\t ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "First Fit" << endl;
            for (i = 1; i <= j; i++)
            {
                flag = 1;
                for (k = 1; k <= n; k++)
                {
                    if (p[i] <= m[k])
                    {
                        cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB allocated at memory partition :\t " << po[k];
                        m[k] = m[k] - p[i];
                        break;
                    }
                    else
                    {
                        flag++;
                    }
                }
                if (flag > n)
                {
                    cout << "\nProcess " << i << " whose memory size is " << p[i] << "KB can't be allocated.";
                }
            }
            externalPart = memorySum - processSum;
            cout << endl;
            cout << "External Partitioning : " << externalPart << endl;
            break;
        case 2:
            cout << "Best Fit" << endl;
            for (y = 1; y <= n; y++)
            {
                for (z = y; z <= n; z++)
                {
                    if (m[y] > m[z])
                    {
                        temp = m[y];
                        m[y] = m[z];

                        m[z] = temp;
                        temp1 = po[y];
                        po[y] = po[z];
                        po[z] = temp1;
                    }
                }
            }
            for (i = 1; i <= j; i++)
            {
                flag = 1;
                for (k = 1; k <= n; k++)
                {
                    if (p[i] <= m[k])
                    {
                        cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB allocated at memory partition :\t " << po[k];
                        m[k] = m[k] - p[i];
                        break;
                    }
                    else
                    {
                        flag++;
                    }
                }
                if (flag > n)
                {
                    cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB can't be allocated";
                }
            }
            externalPart = memorySum - processSum;
            cout << endl;
            cout << "External Partitioning : " << externalPart << endl;
            break;

        case 3:
            cout << "Worst Fit" << endl;
            for (y = 1; y <= n; y++)
            {
                for (z = y; z <= n; z++)
                {
                    if (m[y] < m[z])
                    {

                        temp = m[y];
                        m[y] = m[z];
                        m[z] = temp;
                        temp1 = po[y];
                        po[y] = po[z];
                        po[z] = temp1;
                    }
                }
            }
            for (i = 1; i <= j; i++)
            {
                flag = 1;
                for (k = 1; k <= n; k++)
                {
                    if (p[i] <= m[k])
                    {
                        cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB allocated at memory partition :\t "
                             << po[k];
                        m[k] = m[k] - p[i];
                        break;
                    }
                    else
                    {
                        flag++;
                    }
                }
                if (flag > n)
                {
                    cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB can't be allocated";
                }
            }
            externalPart = memorySum - processSum;
            cout << endl;
            cout << "External Partitioning : " << externalPart << endl;
            break;

        case 4:
            cout << "First Fit with FIXED" << endl;
            for (i = 1; i <= j; i++)
            {
                flag = 1;
                for (k = 1; k <= n; k++)
                {
                    if (p[i] <= fixedSizepart[k])
                    {
                        cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB allocated at memory partition :\t " << po[k];
                        fixedSizepart[k] = fixedSizepart[k] - p[i];
                        break;
                    }
                    else
                    {
                        flag++;
                    }
                }
                if (flag > n)
                {
                    cout << "\nProcess " << i << " whose memory size is " << p[i] << "KB can't be allocated.";
                }
            }
            cout << endl;
            cout << "No internal partitioning" << endl;
            break;

        case 5:
            cout << "Best Fit (fixed size partitioning)" << endl;
            for (y = 1; y <= n; y++)
            {
                for (z = y; z <= n; z++)
                {
                    if (fixedSizepart[y] > fixedSizepart[z])
                    {
                        temp = fixedSizepart[y];
                        fixedSizepart[y] = fixedSizepart[z];

                        fixedSizepart[z] = temp;
                        temp1 = po[y];
                        po[y] = po[z];
                        po[z] = temp1;
                    }
                }
            }
            for (i = 1; i <= j; i++)
            {
                flag = 1;
                for (k = 1; k <= n; k++)
                {
                    if (p[i] <= fixedSizepart[k])
                    {
                        cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB allocated at memory partition :\t " << po[k];
                        fixedSizepart[k] = fixedSizepart[k] - p[i];
                        break;
                    }
                    else
                    {
                        flag++;
                    }
                }
                if (flag > n)
                {
                    cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB can't be allocated";
                }
            }
            cout << endl;
            cout << "No internal partitioning" << endl;
            break;

        case 6:
            cout << "Worst Fit (fixed size partitioning)" << endl;
            for (y = 1; y <= n; y++)
            {
                for (z = y; z <= n; z++)
                {
                    if (fixedSizepart[y] < fixedSizepart[z])
                    {

                        temp = fixedSizepart[y];
                        fixedSizepart[y] = fixedSizepart[z];
                        fixedSizepart[z] = temp;
                        temp1 = po[y];
                        po[y] = po[z];
                        po[z] = temp1;
                    }
                }
            }
            for (i = 1; i <= j; i++)
            {
                flag = 1;
                for (k = 1; k <= n; k++)
                {
                    if (p[i] <= fixedSizepart[k])
                    {
                        cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB allocated at memory partition :\t "
                             << po[k];
                        fixedSizepart[k] = fixedSizepart[k] - p[i];
                        break;
                    }
                    else
                    {
                        flag++;
                    }
                }
                if (flag > n)
                {
                    cout << "\nProcess " << i << " whose memory size is " << p[i] << " KB can't be allocated";
                }
            }
            cout << endl;
            cout << "No internal fragmentation" << endl;
            break;

        case 7:
            break;
        default:
            cout << "Invalid input. Please try again" << endl;
            break;
        }

    } while (c != 7);

    return 0;
}