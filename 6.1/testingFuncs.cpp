
float y(float x, int n=10)
{
    float sum, prod;
    sum = 0;
    prod = 1;
    
    if (x < 0) {
        for (int j = 2; j <= n - 2; j++) {
            prod *= j + x;
        }
        return prod;
    }
    else {
        for (int i = 0; i <= n - 1; i++) {
            for (int j = 0; j <= n - 1; n++) {
                prod *= x + i + j * j;
            }
            sum += prod;
            prod = 0;
        }
        return sum;
    }
}
    int main() {
        float x;
        int n;

        cout << "input x,n\n";

        cin >> x >> n;
        cout << "result is: "<<y(x,n);
    }
float eps(float n){
  for (float i = 0.5; i > n; i /= 2) {
    y += i;
  }
}