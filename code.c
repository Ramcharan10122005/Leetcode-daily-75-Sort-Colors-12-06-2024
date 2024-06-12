void sortColors(int* n, int s) {
    int freq[3] = {0};
    for (int i = 0; i < s; i++) {
        freq[n[i]]++;
    }
    int index = 0;
    for (int i = 0; i < 3; i++) {
        while (freq[i]) {
            n[index++] = i;
            freq[i]--;
        }
    }
}
