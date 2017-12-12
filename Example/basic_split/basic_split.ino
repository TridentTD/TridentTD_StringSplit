void setup() {
  Serial.begin(115200); Serial.println();

  String myString = "Helo My name, is TridentTD. Hey(Hana";

  Serial.println("-----------------------------");
  Serial.println(myString);
  Serial.println("-----------------------------");

  int     MAX = 10;           // ขนาดสูงสุดที่จะตัดแบ่งคำ
  String  str_split[MAX];     // ตัวแปร String ที่จะมาเก็บคำที่ตัดแบ่งแล้ว
  String  delimiters = " ,.("; // หากพบ space หรือ , หรือ . หรือ ( จะใช้เป็นตัวตัดแบ่งคำ

  // myString ทำการตัดแบ่งคำ แล้วเก็บใน str_split[]
  int count = myString.split( str_split, MAX, delimiters );
  for (int i = 0; i < count ; i++) {
    Serial.println(str_split[i]); // แสดงค่าที่ตัดแบ่งคำ
  }
}

void loop() {
  delay(1);
}
