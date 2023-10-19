#include<bits/stdc++.h>
int firstOccurrence(vector<int>& arr, int n, int k) {
    int left = 0, right = n - 1;
    int firstPos = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k) {
            firstPos = mid;
            right = mid - 1; // Continue searching on the left side
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return firstPos;
}

int lastOccurrence(vector<int>& arr, int n, int k) {
    int left = 0, right = n - 1;
    int lastPos = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k) {
            lastPos = mid;
            left = mid + 1; // Continue searching on the right side
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return lastPos;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int, int> p;
    p.first = firstOccurrence(arr, n, k);
    p.second = lastOccurrence(arr, n, k);
    return p;
}
