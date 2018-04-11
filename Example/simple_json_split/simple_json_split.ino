String myJson = "{ \"sensor\"  : { \"clock\"  : \"19.34.43\" , \"temp\" : 32,\"humid\" : 80  } }";

String* sensors, *info;  // ตัวแปร String Array

String clk; 
int t, h;

void setup() {
  Serial.begin(115200); Serial.println();

  int count = myJson.td_split(",{}", &sensors);  // ตัด myJson ด้วย , หรือ { หรือ } ลงใน sensors Array
  for(int i = 0; i < count; ++i)
    if(2 == sensors[i].td_split(" :\"", &info))  // ตัด sensors[i] ด้วย space หรือ " ลงใน info Array
      if(      info[0] == "clock"){ clk = info[1]; clk.replace(".",":"); }  // เก็บค่า clock
      else if( info[0] == "temp")   t   = info[1].toInt();                  // เก็บค่า อุณหภูมิ
      else if( info[0] == "humid")  h   = info[1].toInt();                  // เก็บค่า ความชื้น
      
  Serial.printf("เวลา    : %s\nอุณหภูมิ : %d\nความชื้น : %d\n", clk.c_str(), t, h);  // แสดงผลออก Serial 
}

void loop() {
  // put your main code here, to run repeatedly:

}
