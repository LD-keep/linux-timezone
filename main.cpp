
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

	QStringList m_strListCountry.append(tr("--马朱罗(马绍尔群岛共和国)"));//-12 /usr/share/zoneinfo/Pacific/Nauru
    QStringList m_strListTimeZone.append("/usr/share/zoneinfo/Pacific/Nauru");

    m_strListCountry.append(tr("--阿皮亚(萨摩亚)"));//-11 /usr/share/zoneinfo/Pacific/Apia
    m_strListTimeZone.append("/usr/share/zoneinfo/Pacific/Apia");

    m_strListCountry.append(tr("--夏威夷(美国)"));//-10 /usr/share/zoneinfo/Pacific/Honolulu
    m_strListTimeZone.append("/usr/share/zoneinfo/Pacific/Honolulu");

    m_strListCountry.append(tr("--阿拉斯加(美国)"));//-9 /usr/share/zoneinfo/America/Anchorage
    m_strListTimeZone.append("/usr/share/zoneinfo/America/Anchorage");

    m_strListCountry.append(tr("--太平洋时间（美国和加拿大）"));//-8 /usr/share/zoneinfo/America/Los_Angeles
    m_strListTimeZone.append("/usr/share/zoneinfo/America/Los_Angeles");

    m_strListCountry.append(tr("--亚利桑那(美国)"));//-7 /usr/share/zoneinfo/America/Chihuahua
    m_strListTimeZone.append("/usr/share/zoneinfo/America/Chihuahua");

    m_strListCountry.append(tr("--墨西哥城(墨西哥、尼加拉瓜)"));//-6 /usr/share/zoneinfo/America/Guatemala
    m_strListTimeZone.append("/usr/share/zoneinfo/America/Guatemala");

    m_strListCountry.append(tr("--纽约(印第安那州、巴拿马)"));//-5 /usr/share/zoneinfo/America/New_York
    m_strListTimeZone.append("/usr/share/zoneinfo/America/New_York");

    m_strListCountry.append(tr("--加拉加斯(委内瑞拉、圣地亚哥"));//-4 /usr/share/zoneinfo/America/Caracas
    m_strListTimeZone.append("/usr/share/zoneinfo/America/Caracas");

    m_strListCountry.append(tr("--巴西利亚(巴西、加拿大)"));//-3 /usr/share/zoneinfo/America/Montevideo
    m_strListTimeZone.append("/usr/share/zoneinfo/America/Montevideo");

    m_strListCountry.append(tr("--中大西洋"));//-2 /usr/share/zoneinfo/Atlantic/Cape_Verde
    m_strListTimeZone.append("/usr/share/zoneinfo/Atlantic/Cape_Verde");

    m_strListCountry.append(tr("--佛得角(普拉亚、亚速尔群岛)"));//-1 /usr/share/zoneinfo/Atlantic/Azores
    m_strListTimeZone.append("/usr/share/zoneinfo/Atlantic/Azores");

    m_strListCountry.append(tr("--伦敦(英国、几内亚)"));//0 /usr/share/zoneinfo/Europe/London
    m_strListTimeZone.append("/usr/share/zoneinfo/Europe/London");

    m_strListCountry.append(tr("--柏林(德国、法国、荷兰、比利时)"));//+1 /usr/share/zoneinfo/Europe/Berlin
    m_strListTimeZone.append("/usr/share/zoneinfo/Europe/Berlin");

    m_strListCountry.append(tr("--雅典(埃及、希腊、芬兰、乌克兰)"));//+2 /usr/share/zoneinfo/Europe/Athens
    m_strListTimeZone.append("/usr/share/zoneinfo/Europe/Athens");

    m_strListCountry.append(tr("--莫斯科(俄罗斯、伊拉克、也门)"));//+3 /usr/share/zoneinfo/Europe/Moscow
    m_strListTimeZone.append("/usr/share/zoneinfo/Europe/Moscow");

    m_strListCountry.append(tr("--阿布扎比(毛里求斯、塞舌尔)"));//+4 /usr/share/zoneinfo/Indian/Mauritius
    m_strListTimeZone.append("/usr/share/zoneinfo/Indian/Mauritius");

    m_strListCountry.append(tr("--伊斯兰堡(巴基斯坦、马尔代夫)"));//+5 /usr/share/zoneinfo/Indian/Maldives
    m_strListTimeZone.append("/usr/share/zoneinfo/Indian/Maldives");

    m_strListCountry.append(tr("--达卡(孟加拉国、不丹)"));//+6 /usr/share/zoneinfo/Asia/Dhaka
    m_strListTimeZone.append("/usr/share/zoneinfo/Asia/Dhaka");

    m_strListCountry.append(tr("--曼谷(泰国、老挝)"));//+7 /usr/share/zoneinfo/Asia/Bangkok
    m_strListTimeZone.append("/usr/share/zoneinfo/Asia/Bangkok");

    m_strListCountry.append(tr("--北京(中国、新加坡、文莱)"));//+8 /usr/share/zoneinfo/Asia/Shanghai
    m_strListTimeZone.append("/usr/share/zoneinfo/Asia/Shanghai");

    m_strListCountry.append(tr("--东京(日本、韩国)"));//+9 /usr/share/zoneinfo/Asia/Tokyo
    m_strListTimeZone.append("/usr/share/zoneinfo/Asia/Tokyo");

    m_strListCountry.append(tr("--堪培拉(澳大利亚、巴布亚新几内亚)"));//+10 /usr/share/zoneinfo/Australia/Canberra
    m_strListTimeZone.append("/usr/share/zoneinfo/Australia/Canberra");

    m_strListCountry.append(tr("--霍尼亚拉(所罗门群岛、新喀里多尼亚)"));//+11 /usr/share/zoneinfo/Pacific/Noumea
    m_strListTimeZone.append("/usr/share/zoneinfo/Pacific/Noumea");

    m_strListCountry.append(tr("--惠灵顿(新西兰、瑙鲁、马绍尔群岛)"));//12 /usr/share/zoneinfo/Pacific/Nauru
    m_strListTimeZone.append("/usr/share/zoneinfo/Pacific/Nauru");
	
	int index = 8;
	QString strCmd = "ln -sf " + m_strListTimeZone.at(index) + " /etc/localtime";
    system(strCmd.toStdString().c_str());
    QTime currTime = QDateTime::currentDateTime().time();

    app.exec();
    return 0;
}
