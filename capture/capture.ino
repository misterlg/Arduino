/*
*********************************************************************************************************
* Define
*********************************************************************************************************
*/

#define PWM 5
#define CAPTURE 4

/*
*********************************************************************************************************
* 功  能：模块初始化
* 形  参：None
* 返回值：None
* 备  注：None
* 作  者：LG
* 日  期：2020/10/29
*********************************************************************************************************
*/

void setup()
{
    Serial.begin(115200);
    analogWriteFreq(1000);
    analogWrite(PWM, 512);
    pinMode(CAPTURE, INPUT);
}

/*
*********************************************************************************************************
* 功  能：循环调用
* 形  参：None
* 返回值：None
* 备  注：None
* 作  者：LG
* 日  期：2020/10/29
*********************************************************************************************************
*/

void loop()
{
    float time = 0;
    time = pulseIn(CAPTURE, HIGH);
    Serial.println(time);
    delay(1000);
}
