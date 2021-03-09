Otamat

Münir Can Civelek  -  170202030	
Mehmet Anýl Çitçi -   170202084

Bu readme.txt dosyasý, Otamat projesine aittir.
Bu paket, kaynak kodu ile ayný dizin içerisinde bulunacaktýr.


1-PAKETÝN ÝÇERÝÐÝ:
----------
170202030-170202084.txt - Projenin tek dosyaya indirgenmiþ salt kaynak kodu.
readme.txt - Bu dosya.
Otamat.zip - Projenin kaynak kodunun ve yardýmcý dosyalarýn ziplenmiþ hali.
OtamatProjesi.pdf - Proje raporu.
----------


2-SÝSTEM GEREKSÝNÝMLERÝ:
-------------------
Energia  - http://energia.nu/download/
-------------------


3-PROJEYÝ ÇALIÞTIRMAK:
-------------------
Paket içeriðini yukarýda görebilirsiniz.

Bu kod, 2 adet Windows 10 kurulu bilgiasayar üzerinde  çalýþtýrýldý.

Energia'yý  indirmek  ve gerekli araçlarý kurmak için https://www.blogozan.net/tiva-c-serisi-launchpad-tm4c123g-baslangic-ayarlari-ders-1/ sayfasýný ziyaret edebilirsiniz.

Bu iki durumda da, kod, herhangi bir hata vermeksizin, daha önceden
belirlenen kriterlere uygun çalýþtý.


4-KODU DERLEMEK:
------------------
Artýk bilgisayarýmýzda kurulu olan Energia ile kodu kolayca derleyebiliriz.

Projeyi geliþtirim kartýnda çalýþtýrmak için kodu Energia IDE'sine 170202030-170202084.txt yi kopyalayýp yapýþtýrdýktan sonra yükle butonuna týklamanýz yeterli.

Eðer kart,Energia  tarafýndan bulunamadýysa (OpenOCD hatasý) Gerekli ayarlarý https://www.blogozan.net/tiva-c-serisi-launchpad-tm4c123g-baslangic-ayarlari-ders-1/ sayfasýndan yaptýðýnýzdan emin olun.
------------------


5- PARAMETRELER
---------------------------
Kodun çalýþmasý için baþlangýçta herhangi bir parametre gerekmiyor.
------------------


6- PROGRAMIN KULLANIMI
-----------------------------
Otamat Programý , kullanýcýdan belirli butonlara basarak otamata para yüklemesi ile baþlar. Önceden belirlenmiþ olan  1 TL , 0,50 Kuruþ,  0,25 Kuruþ ve Bitiþ butonlarý kullanýlarak otamata para yüklenir ve yükleme esnasýnda yüklenen para LCD üzeinde kullanýcýya gösterilir. Para iþlemleri bitirdikten sonra ürün seçiminin yapýlmasý için gerekli olan Bitiþ butona basýlýr ve ürün seçim ekraný LCD üzerinde gösterilir.Yine önceden belirlenmiþ olan Su , Çay , Kahve , Çikolata , Bisküvi ve Bitiþ butonlarý kullanýlarak kullanýcýdan ürün seçmesi istenir.Seçilen ürünlerin butona basýldýðý anda  UrunID leri LCD üzerinde kullanýcýya gösterilir.

Programýn belirli görevleri yerine getirildikten sonra  0 ile 4 arasýnda  rastgele bir sayý üretilir ve bu üretline sayýya göre kart üzerindeki LED'den bir output verilir.

Son olarak kullanýcýya verilecek para üstü otamatýn kasasýnda bulunan 1 TL , 0,50 Kuruþ  ve 0,25 Kuruþ sayýsýna göre en az sayýda bouzk para vericek þekilde verilir.