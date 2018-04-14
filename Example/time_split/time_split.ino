void setup() {
  Serial.begin(115200); Serial.println();

  String time_clock = "2018/04/14 17:07:54";
  String* str = NULL;  //เตรียม String Array สำหรับจะตัดคำ
  int count = time_clock.td_split("/ :", &str);

  // วันเดือนปี ชัวโมงนาทีวินาที จะถูกตัดคำออกมาไว้ตาม str[0], ... ต่างๆ
  Serial.println(str[0]); // 2018
  Serial.println(str[1]); // 04
  Serial.println(str[2]); // 14
  Serial.println(str[3]); // 17
  Serial.println(str[4]); // 07
  Serial.println(str[5]); // 54
}

void loop() {
  delay(1);
}
