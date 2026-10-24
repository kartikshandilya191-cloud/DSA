class Solution {
  public:
    vector<int> find(int l, int b, int h) {
        int area = 2*(l*b+b*h+h*l);
        int volume = l*b*h;
        
        return {area, volume};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna