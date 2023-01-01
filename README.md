# PET-FEEDER


# Projenin Amacı ve Potansiyeli

Bu projede çok yönlü beslenme sisteminin fiziksel aktiviteye gerek olmadan evcil hayvanın beslenmesi hedeflenmiştir. İnternet evrimini takip eden bu süreçte uzaktan kontrol sistemlerinin vizyonları öngörüsünde çalışılmıştır. Uzaktan kontrol edilebilecek bu projede evcil hayvanlarımızın düzenli beslenebilmesi için belirli saatlerde, telefon uygulaması ile istenen ölçüde ve olağan dışı durumlarda fiziksel bir kumanda yardımıyla kullanılabilecek beslenme ünitesi yapılması hedeflenmiştir.

# Projenin Çıkış Nedeni

Ülkemizde evcil hayvan besleme oranı pandeminin başlamasıyla beraber 2-3 katına çıkmıştır Bununla beraber sorunlarda artmıştır. Evcil hayvan besleyen kişilerin %65’ini çalışan kişiler oluşturmaktadır. Evde tek başına bırakılan kedi veya köpeğin düzenli şekilde beslenemediği tespit edilmiştir ve evcil minik dostlarımız için sağlık sorunları ortaya çıkmaktadır. Düzensiz mama tüketimi evcil hayvan sahiplerinin cebinden fazla para çıkmasına neden olmaktadır.



# Proje ile Elde Edilen Çözümler

Düzenli olarak günün belirli saatlerinde verdiği sesli ikazla istenilen kadar, mama ve suyu kaba aktaran Akıllı Çok Yönlü Evcil Hayvan Besleme Robotu” kullanılarak birçok sorunun önüne geçilmektedir. Evcil dostumuzun tükettiği mamanın hesabı tutularak sahiplerine kar ettirmektedir. Bununla beraber kaba dökülen suyun zaman içinde toz biriktiği ve bazı minerallerini kaybettiği öngörülmektedir. Kapalı bir haznede tutulan suyun havayla teması olmadığı için daha sağlıklı olmaktadır. Evden aceleyle çıkıp mama ve suyu koymayı unuttuğunuz da evcil hayvanın aç kalacak korkusu olmadan günlük işlerinize odaklanabileceksiniz.

# Kontrol ve Güç Sistemleri

Uzaktan kontrol sisteminde kontrolcü olarak Arduıno MEGA kullanılacaktır. Uzaktan bağlantı için HC06 Bluetooth-Serial Modül Kartı kullanılacaktır. Ayrıca Ultrasnonik mesafe sensörü ile mama seviye kontrolü yapılacaktır.Su seviye sensörü ile su seviyesi istenilen düzeyde tutulacaktır. RTC saat modülü ile saat gerçek zamanlı işlenerek düzenli beslenme sağlanabilecek.
Montajı yapılan tüm bu elektronik sistemlerin sensörlerinden veri alınabilmektedir.

# Yazılımsal Modelleme
Çözümümüz için gerekli olan uzaktan kontrol sisteminin kararlılığını, işleyişini ve olası durumlara karşın cevap oluşturmasını sağlamaktadır. Yazılımsal modelimiz için uzak kontrol sisteminin nasıl olması gerektiği üzerine birtakım algoritmalar geliştirilmiştir.

# İŞ PAKETİ 2: ANALİZ
 
Analiz başlığı, çözüm odaklı prototip çalışmalarından önce tasarım üzerindeki eksikleri görme aşamasıdır.

# Yapısal Analiz
Modelleme çalışmalarında gerekli olan alt sistemlere eksiksiz bir şekilde karar verilmiştir.

# Kod Çıktılarının Analizi
Uzaktan kontrol sistemi için yazılan kodların Arduıno test kiti aracılığıyla test edilmesi sağlanmıştır.



# İŞ PAKETİ 3: OPTİMİZASYON
Optimizasyon başlığı analiz sırasında tespit edilen sorunlara en iyi çözümleri aramaktadır. Ayrıca nihai prototip ürüne geçilmesi öncesi son basamak olarak belirlenmiştir.

# Mekanik Optimizasyon
Yapısal analiz sırasında kritik parçalar üzerinde oluşacak kuvvetlerin (kesme, bası, çekme vb. kuvvetler) parçalar üzerindeki gerilme değerlerinin azaltılmasına yönelik eklentiler yapılacaktır. Bu eklentiler sayesinde prototipin yapısal olarak mukavemeti arttırılacaktır.

# Donanım-Yazılım Uyumluluğu


Yazılımın işleyişi sırasında gerekli tepki ve hız limitlerinin sağlanması için donanımın bu tip işlemlere uygun olup olmadığının sorgulanma aşamasıdır. Prototipin uzaktan kontrolü sırasında aynı anda birçok sensörden yüksek hızda veriler alınmaktadır. Bu verilerin işlenmesi için donanımın bu kapasiteler dahilinde olması gerekmektedir. Bundan dolayı yüksek işlemci hızına sahip donanımların kullanılmasına karar verilmiştir.



# İŞ PAKETİ 4: PROTOTİP ÜRETİMİ
Nihai prototip ve uyguladığımız yöntemin gerçek hayatta test edilmesini içeren son basamaktır.
Gövde Üretimi
Yapılan modellemeler ve analizler sonucunda karar verilen tasarıma göre gövde üretimi yapılacaktır. Gövde üretiminin içerisine ana gövde, uzaktan kontrol sistemi,ve hareket sistemi dahil olmaktadır. Bu sistemlerin üretimi 3 boyutlu yazıcı vasıtasıyla gerçekleştirilecektir.

# Montaj

Gövde üretimi aşamasında üretilen parçaların bu kısımda montaj işlemlerine başlanacaktır. Montaj işlemi son modellemeye göre yapılarak aracın prototip üretiminin sonuna gelinecektir.

# YENİLİKÇİ YÖNÜ
Özgün gövde tasarımı, donanım ve yazılım kodlaması sayesinde kişiye özel tasarım ve isteğine göre değiştirebilir yazılım ve donanım sistemi sayesinde birçok markanın yapmış olduğu tek tip ürünün önüne geçilmektedir.

# PROJEMİZİN HEDEF KİTLESİ
Projemizin hedef kitlesi öncelikle evcil hayvan besleyen hayvan severlerdir. Daha sonra yaklaşık 30 bin kişiden oluşan veteriner hekimlerimizdir. Gerekli şartlar oluşması halinde yurtdışı içinde planlarımız mevcuttur.
