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
    uint16_t adc_value = 0;
    adc_value = analogRead(A0);
    Serial.println(adc_value);
    delay(1000);
    
}
