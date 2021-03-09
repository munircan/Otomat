Otamat

M�nir Can Civelek  -  170202030	
Mehmet An�l �it�i -   170202084

Bu readme.txt dosyas�, Otamat projesine aittir.
Bu paket, kaynak kodu ile ayn� dizin i�erisinde bulunacakt�r.


1-PAKET�N ��ER���:
----------
170202030-170202084.txt - Projenin tek dosyaya indirgenmi� salt kaynak kodu.
readme.txt - Bu dosya.
Otamat.zip - Projenin kaynak kodunun ve yard�mc� dosyalar�n ziplenmi� hali.
OtamatProjesi.pdf - Proje raporu.
----------


2-S�STEM GEREKS�N�MLER�:
-------------------
Energia  - http://energia.nu/download/
-------------------


3-PROJEY� �ALI�TIRMAK:
-------------------
Paket i�eri�ini yukar�da g�rebilirsiniz.

Bu kod, 2 adet Windows 10 kurulu bilgiasayar �zerinde  �al��t�r�ld�.

Energia'y�  indirmek  ve gerekli ara�lar� kurmak i�in https://www.blogozan.net/tiva-c-serisi-launchpad-tm4c123g-baslangic-ayarlari-ders-1/ sayfas�n� ziyaret edebilirsiniz.

Bu iki durumda da, kod, herhangi bir hata vermeksizin, daha �nceden
belirlenen kriterlere uygun �al��t�.


4-KODU DERLEMEK:
------------------
Art�k bilgisayar�m�zda kurulu olan Energia ile kodu kolayca derleyebiliriz.

Projeyi geli�tirim kart�nda �al��t�rmak i�in kodu Energia IDE'sine 170202030-170202084.txt yi kopyalay�p yap��t�rd�ktan sonra y�kle butonuna t�klaman�z yeterli.

E�er kart,Energia  taraf�ndan bulunamad�ysa (OpenOCD hatas�) Gerekli ayarlar� https://www.blogozan.net/tiva-c-serisi-launchpad-tm4c123g-baslangic-ayarlari-ders-1/ sayfas�ndan yapt���n�zdan emin olun.
------------------


5- PARAMETRELER
---------------------------
Kodun �al��mas� i�in ba�lang��ta herhangi bir parametre gerekmiyor.
------------------


6- PROGRAMIN KULLANIMI
-----------------------------
Otamat Program� , kullan�c�dan belirli butonlara basarak otamata para y�klemesi ile ba�lar. �nceden belirlenmi� olan  1 TL , 0,50 Kuru�,  0,25 Kuru� ve Biti� butonlar� kullan�larak otamata para y�klenir ve y�kleme esnas�nda y�klenen para LCD �zeinde kullan�c�ya g�sterilir. Para i�lemleri bitirdikten sonra �r�n se�iminin yap�lmas� i�in gerekli olan Biti� butona bas�l�r ve �r�n se�im ekran� LCD �zerinde g�sterilir.Yine �nceden belirlenmi� olan Su , �ay , Kahve , �ikolata , Bisk�vi ve Biti� butonlar� kullan�larak kullan�c�dan �r�n se�mesi istenir.Se�ilen �r�nlerin butona bas�ld��� anda  UrunID leri LCD �zerinde kullan�c�ya g�sterilir.

Program�n belirli g�revleri yerine getirildikten sonra  0 ile 4 aras�nda  rastgele bir say� �retilir ve bu �retline say�ya g�re kart �zerindeki LED'den bir output verilir.

Son olarak kullan�c�ya verilecek para �st� otamat�n kasas�nda bulunan 1 TL , 0,50 Kuru�  ve 0,25 Kuru� say�s�na g�re en az say�da bouzk para vericek �ekilde verilir.