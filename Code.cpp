class Solution {
public:
    int numberOfMatches(int n) {
        int total_matches = 0;

        while (n > 1) {
            int matches = n / 2;
            total_matches += matches;

            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = (n - 1) / 2 + 1;
            }
        }

        return total_matches;
    }
};
