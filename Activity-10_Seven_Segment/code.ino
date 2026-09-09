// Activity 10 – Seven Segment Display

const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void displayDigit(int digit)
{
  // Segment pattern: a, b, c, d, e, f, g
  const bool numbers[10][7] =
  {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
  };

  digitalWrite(a, numbers[digit][0]);
  digitalWrite(b, numbers[digit][1]);
  digitalWrite(c, numbers[digit][2]);
  digitalWrite(d, numbers[digit][3]);
  digitalWrite(e, numbers[digit][4]);
  digitalWrite(f, numbers[digit][5]);
  digitalWrite(g, numbers[digit][6]);
}

void loop()
{
  for (int digit = 0; digit <= 9; digit++)
  {
    displayDigit(digit);
    delay(1000);
  }
}
