class Coin {
  public static void coinChangeGreedy(int n) {
    int coins[] = {20, 10, 5, 1};
    int i=0;

    while(n>0) {
      if(coins[i] > n) {
        i++;
      }
      else {
        System.out.print(coins[i]+"\t");
        n = n-coins[i];
      }
    }
    System.out.println("");
  }

  public static void main(String[] args) {
    for(int i=1; i<=20; i++) {
      coinChangeGreedy(i);
    }
  }
}
