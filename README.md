# Otomat
Otamat

Münir Can Civelek  -  170202030	
Mehmet Anıl Çitçi -   170202084

Bu readme.txt dosyası, Otamat projesine aittir.
Bu paket, kaynak kodu ile aynı dizin içerisinde bulunacaktır.


1-PAKETİN İÇERİĞİ:
----------
170202030-170202084.txt - Projenin tek dosyaya indirgenmiş salt kaynak kodu.
readme.txt - Bu dosya.
Otamat.zip - Projenin kaynak kodunun ve yardımcı dosyaların ziplenmiş hali.
OtamatProjesi.pdf - Proje raporu.
----------


2-SİSTEM GEREKSİNİMLERİ:
-------------------
Energia  - http://energia.nu/download/
-------------------


3-PROJEYİ ÇALIŞTIRMAK:
-------------------
Paket içeriğini yukarıda görebilirsiniz.

Bu kod, 2 adet Windows 10 kurulu bilgiasayar üzerinde  çalıştırıldı.

Energia'yı  indirmek  ve gerekli araçları kurmak için https://www.blogozan.net/tiva-c-serisi-launchpad-tm4c123g-baslangic-ayarlari-ders-1/ sayfasını ziyaret edebilirsiniz.

Bu iki durumda da, kod, herhangi bir hata vermeksizin, daha önceden
belirlenen kriterlere uygun çalıştı.


4-KODU DERLEMEK:
------------------
Artık bilgisayarımızda kurulu olan Energia ile kodu kolayca derleyebiliriz.

Projeyi geliştirim kartında çalıştırmak için kodu Energia IDE'sine 170202030-170202084.txt yi kopyalayıp yapıştırdıktan sonra yükle butonuna tıklamanız yeterli.

Eğer kart,Energia  tarafından bulunamadıysa (OpenOCD hatası) Gerekli ayarları https://www.blogozan.net/tiva-c-serisi-launchpad-tm4c123g-baslangic-ayarlari-ders-1/ sayfasından yaptığınızdan emin olun.
------------------


5- PARAMETRELER
---------------------------
Kodun çalışması için başlangıçta herhangi bir parametre gerekmiyor.
------------------


6- PROGRAMIN KULLANIMI
-----------------------------
Otamat Programı , kullanıcıdan belirli butonlara basarak otamata para yüklemesi ile başlar. Önceden belirlenmiş olan  1 TL , 0,50 Kuruş,  0,25 Kuruş ve Bitiş butonları kullanılarak otamata para yüklenir ve yükleme esnasında yüklenen para LCD üzeinde kullanıcıya gösterilir. Para işlemleri bitirdikten sonra ürün seçiminin yapılması için gerekli olan Bitiş butona basılır ve ürün seçim ekranı LCD üzerinde gösterilir.Yine önceden belirlenmiş olan Su , Çay , Kahve , Çikolata , Bisküvi ve Bitiş butonları kullanılarak kullanıcıdan ürün seçmesi istenir.Seçilen ürünlerin butona basıldığı anda  UrunID leri LCD üzerinde kullanıcıya gösterilir.

Programın belirli görevleri yerine getirildikten sonra  0 ile 4 arasında  rastgele bir sayı üretilir ve bu üretline sayıya göre kart üzerindeki LED'den bir output verilir.

Son olarak kullanıcıya verilecek para üstü otamatın kasasında bulunan 1 TL , 0,50 Kuruş  ve 0,25 Kuruş sayısına göre en az sayıda bouzk para vericek şekilde verilir.
