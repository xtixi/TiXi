#include <iostream>
#include <locale.h>
#include <math.h>
#include <random>
#include <ctime>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cstdio>


using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int(giris);
	cout <<"TiXi v0.2 Alpha (Demo Version)" << endl << endl;
	cout << "TiXi'ye ho� geldiniz!" << endl << endl << endl;
	gitana:
	cout << "-Ana Men�-" << endl;
	girisgit:
	cout << "Ne yapmak istersiniz?" << endl;
	cout << "Yeni oyuna ba�la[1'e bas�n]\nOyun y�kle[2'ye bas�n] (demoda mevcut de�il)" << endl;
	cout << "Oyun nas�l oynan�yor?[3'e bas�n]\nYap�mda eme�i ge�enler[4'e bas�n]\n��k�� yap[5'e bas�n]" << endl;

	cin >> giris;
	cout << endl;
	if (giris > 5 || giris < 1)
	{ 
		cout << "L�tfen ge�erli bir komut giriniz." << endl;
		goto girisgit;
	}
	if (giris == 5)
	{
		cout << "Oyunumu oynad���n i�in te��ek�ler!." << endl;
		return (0);
	}
	if (giris == 2)
	{
		cout << endl << "Malesef oyunun demo versiyonunda bu se�enek etkin de�ildir." << endl;
		goto gitana;
	}
	if (giris == 3)
	{
		int bilgi, kontrol;
		gitoyunnasioynaniyor:
		cout << endl << endl;
		cout << "TiXi hayali bir orta d�nyada ge�en interaktif yaz� tabanl� oyundur.\nKarakterinizi olu�turduktan sonra verice�iniz kararlar do�rultusunda ";
		cout << "hikaye geli�ir." << endl;
		gitanlamamis:		
		cout << "Oyunun temel oynan�� bi�imi size y�neltilen se�enekleri klavyeden rakam girerek kontrol etmenizdir." << endl;
		cout << "Genelde bu olay [rakam] �eklinde olur" << endl << endl;
		gitkontrol:
		cout << "(�rnek) Anlad�n�z m�?" << endl << "Evet[1] Hay�r[2]"<<endl;
		cin >> kontrol;
		cout << endl;
		if (kontrol < 1 || kontrol > 2)
			{
			cout << "L�tfen belirli rakamlar aras�nda se�im yap�n�z.(1,2)"<<endl;
			goto gitkontrol;
			}
		if(kontrol==2)
			{
			goto gitanlamamis;
			}
		if (kontrol == 1)
		cout << "Tebrikler! Oyunun mekani�ini ��zd�n�z." << endl << endl;
		cout << "Oyunda �imdilik(v0.1) 4 temel �rk vard�r.\nBunlar:Kuzeyli, G�neyli, Bat�l�, Do�ulu." << endl;
		cout << "Bu �rklar�n her biri 3 temel �zelli�e kendi �rklar�na g�re belirli derecede sahip olurlar." << endl;
		cout << "3 temel �zellik: G��, Zeka, �eviklik\n�imdilik (v0.2) karakterlerin giyebilece�i 10 �e�it e�ya vard�r\nBu e�yalar�n her birisi ";
		cout << "belirli �zelliklere e�ya t�r�ne g�re belirli derecede sahiptir." << endl;
		cout << "Oyunda basit bir sava� sistemi vard�r" << endl<<endl;
		gitq: githikayebitti:
		cout << "Ba�ka bilgi ister misiniz?" << endl;
		cout << "Hikayeden bahset[1] E�yalardan bahset[2] Irklardan bahset[3] �zelliklerden bahset[4]\nSava� sisteminden bahset[5] Ana men�ye d�n[6]" << endl;
		cin >> bilgi;
		cout << endl;
		if (bilgi < 1 || bilgi>6)
		{
			cout << "L�tfen belirli rakamlar aras�nda se�im yap�n�z.(1,6)" << endl << endl;
			goto gitq;
		}
		if (bilgi == 6)
		{
			goto gitana;
		}
		if (bilgi == 1)
		{
			cout << "Hikayeyi oyun i�inde oyunu oynayarak ��reniceksiniz ama hikayeyi basit�e anlatmak gerekirse, D�nya tek bir kara par�as�ndan olu�uyordu";
			cout << " ve bu kara par�as� b�y�k bir art� �ekline benziyordu.\nKara par�as�n�n �eklinden dolay� ilk insanlar D�nyan�n ortas�nda ya��yorlard�." << endl;
			cout << "�lerleyen zamanlarda azalan kaynaklar ve artan pop�lasyondan dolay� insanlar art� �eklindeki karan�n 4 bir taraf�na e�it olarak da��ld�";
			cout << " ve art�n�n her bir k��esinde e�it kara par�alar� ile 4 farkl� imparatorluk kuruldu.\nDo�udaki imparatorluk G�ne� �mparatorlu�u,";
			cout << " Bat�daki imparatorluk Ay �mparatorlu�u, Kuzeydeki imparatorluk Beyaz �mparatorlu�u, G�neydeki �mparatorluk Ate� �mparatorlu�udur." << endl;
			cout << "Milletler kendi �lkelerine yerle�ti ve art� �eklindeki karenin ortas�n� ortak b�lge olarak belirleyip Alaz Antla�mas�n� imzalard�lar." << endl;
			cout << "Bu antla�maya g�re orta b�lgeye alaz ismi verildi ve bu b�lgede kesici alet bulundurmak, herhangi bir kayna��na zarar vermek, �st�nde hak";
			cout << " talep etmek yasakland�.\nBu maddelere uymayan �lkelere ortak sava� a��lacakt�.\n�lkeler uzun s�re boyunca huzur i�inde ya�ad� ancak";
			cout << " ilerleyen y�llarda D�nyan�n g�neyinde olan kurakl�ktan dolay� Ate� �mparatorlu�u sefalet �ekmeye ba�lad�.\nDi�er �lkelerden yard�m";
			cout << " isteseler de geli�en refahla birlikte insanlar becille�mi�ti.\nSadece G�ne� �mparatorlu�u, Ate� �mparatorlu�una yard�m etmeye �al��sa da";
			cout << " tek bir �lkenin yard�m�yla Ate� �mpartorlu�u bir yere kadar dayanabildi.\nN�fusunun b�y�k bir �o�unlu�u a�l�ktan ve hastal�ktan �ld�, Saray";
			cout << " halk taraf�ndan ya�malan�p soylular tek tek �ld�r�ld� ve bu nedenle imparatorluk ��kt�.\nArt�k D�nyan�n G�neyi insanlar�n birbirinden";
			cout << " ba��ms�z ve rastgele ya�ad��� kurak topraklard�.\nBu olay bin y�llar boyu s�rd� ama daha sonras�nda G�ney topraklar�ndan Y�z�rs adl� bir";
			cout << " sava��� ��kt�.\nBu sava���n�n s�rad��� bir �zelli�i vard� hayvanlarla anla�abiliyordu ve �st�n bir ikna kabiliyeti vard�." << endl;
			cout << "Sava���n�n bu �zelli�i hi� de az�msanam�yacak bir �zellikti bunun sebebi bin y�llar boyunca el de�memi� �ekilde devam eden Alaz b�lgesinde";
			cout << " artan ot�u hayvanlardan ve alan�n dar olmas� et�il hayvanlar�n evrimle�mesine yol a�t�.\nEtobur hayvanlar�n derileri sertle�ti ve boyutlar� b�y�d�.\n";
			cout << "Y�z�rs k���k ya�ta b�t�n ailesini a�l�ktan dolay� kaybetmi�ti ve bu y�zden imparatorluklara bir kini vard�.\nBu kin o kadar b�y�kt� ki y�z�rs�n";
			cout << " kalbini art�k saf karanl�k kaplam��t�.\nY�z�rs daha sonras�nda kendisi gibi yetenekli 3 ki�i daha bulup ''TiXi'' �rg�t�n� kurdu." << endl;
			cout << "Bu �rg�t sayesinde da��lm�� ate� imparatorlu�unu bir araya getirdi ve Alaz topraklar�na yerle�tirdi ve K�l �mparatolu�unu kurdu." << endl;
			cout << "B�t�n imparatorluklar ayn� anda bu imparatolu�a sava� a�sa da �ok fazla hayvan vard�.\nEvrimle�mi� k�stebekler surlar�n alt�ndan b�y�k t�neller";
			cout << " a��yordu, k�pekbal�klar� ve balinalar imparatorluklar�n donanmalar�n� yok ediyorlard�, y�rt�c� hayvanlar sayesinde de imparatorluklar�";
			cout << " p�sk�rt�p �ok rahat bir �ekilde kar�� sald�r� yap�yorlard�.\nK�sa s�re i�inde sava� sonu�land� ve imparatorluklar bu g�ce dayanamay�p boyun e�diler." << endl;
			cout << "K�l �mparatorlu�u, b�t�n imparatorluklar� vergiye ba�lam�� ve h�zla s�per g�� olmu�tu.\nOyunumuz bu d�nemde TiXi �rg�t�ne kar�� ��kmaya �al��an bir";
			cout << " sava���y� anlat�yor." << endl << endl;
			goto githikayebitti;
		}
		if (bilgi == 2)
		{
			cout << "E�yalar�n kendi tiplerine has g��leri vard�r.\nBu g��ler karakterinizin g��leri ile birle�ir.\nE�ya �zellikleri ��yledir:" << endl << endl;
			cout << "K�l��: G�� ve �eviklik de�eri dengelidir.\nG�rz: G�� de�eri �eviklik de�erine g�re daha fazlad�r." << endl;
			cout << "Balta: G�� de�eri �eviklik de�erine g�re daha fazlad�r.(G�� de�eri g�rze g�re daha azd�r.) ve balta sald�r�lar�n�n engellenme ihtimali daha d���kt�r." << endl;
			cout << "Han�er: �eviklik de�eri g�� de�erine g�re daha fazlad�r.\n�ift El Baltas�: Normal baltaya g�re g�� de�eri �eviklik de�erinden daha da fazlad�r." << endl;
			cout << "�ift El K�l�c�: Normal k�l�ca g�re g�� de�eri �eviklik de�erinden daha fazlad�r.\nBalyoz: G�rze g�re g�� de�eri �eviklik de�erinden daha fazlad�r." << endl;
			cout << "A��r Z�rh: G�� de�erinizi artt�r�r.\nHafif Z�rh: �eviklik de�erinizi artt�r�r." << endl;
			cout << endl;
			goto githikayebitti;
		}
		if (bilgi == 3)
		{
			cout << "Oyunda 4 adet �rk vard�r.\nBu �rklar ve �rklar�n �zellikleri ��yledir:\nKuzeyli: Oyuna ba�lang�� �zellikleri �u �ekildedir. (G��:7 �eviklik:2 Zeka:1)."<<endl;
			cout << "Kuzeyliler Beyaz �mparatorlu�unda ya�ayan, as�rlard�r denizcilikle ilgilenen uzun boylu insanlard�r." << endl;
			cout << "Bat�l�: Oyuna ba�lang�� �zellikleri �u �ekildedir. (G��:1 �eviklik:2 Zeka:7)." << endl;
			cout << "Bat�l�lar Ay �mparatorlu�unda ya�ayan, Bilimle olduk�a ilgilenen bir �rkt�r." << endl;
			cout << "Do�ulu: Oyuna ba�lang�� �zellikleri �u �ekildedir. (G��:3 �eviklik:5 Zeka:2)" << endl;
			cout << "Do�ulular G�ne� �mparatorlu�unda ya�ayan, genelde tar�m ve hayvanc�l�k ile u�ra�an insanlard�r." << endl;
			cout << "G�neyli: Oyuna ba�lang�� �zellikleri �u �ekildedir. (G��:2 �eviklik:7 Zeka:1)" << endl;
			cout << "G�neyliler y�k�lmadan �nce Ate� �mparatorlu�unda ya�am��, ondan sonra da kurak b�lgede hayatta kalabilmek i�in kendilerini geli�tirmi� insanlard�r." << endl << endl;
			goto githikayebitti;
		}
		if (bilgi == 4)
		{
			cout << "Oyunda 3 adet �zellik vard�r bu g��ler ve �zellikleri �u �ekildedir." << endl;
			cout << "G��: Kar��n�zdaki d��mana vurabilece�iniz minimum ve maksimum hasar� ve can de�erinizi belirler." << endl;
			cout << "(Minumum hasar�n�z = G�c�n�z, Maksimum hasar�n�z = G�c�n�z�n iki kat�, Can�n�z = G�c�n�z�n 4 kat�.)" << endl;
			cout << "�eviklik: Kar��n�zdaki d��man�n sald�r�s�ndan ka��nma(sald�r�y� �skalatt�rma) �ans�n�z� ve kritik hasar vurabilme �ans�n�z� belirler." << endl;
			cout << "�evikli�inizin iki kat�=Y�zdelik ka��nma ihtimaliniz, �evikli�inizin iki kat�=Y�zdelik kritik vurma �ans�n�z." << endl;
			cout << "Zeka: Oyunda ilerlemek i�in gerekli baz� kitaplar� okuyabilmenizi sa�lar ve oyunda baz� alternatif se�enekleri se�ebilmenizi sa�lar." << endl;
			cout << "Oyunda �zelliklerinizi kar��n�za ��kan f�rsatlar sayesinde geli�tirebilirsiniz(Bu mekani�i oyunu oynarken g�receksiniz.)" << endl << endl;
			goto githikayebitti;
		}
		if (bilgi == 5)
		{
			cout << "Oyunda basit bir sava� sistemi vard�r.\nOyunda sava� hamle hamle olur, hamle size geldi�inde sald�rma yolunuzu se�ersiniz." << endl;
			cout << "Sald�rma yollar�:" << endl;
			cout << "Karakterin bacaklar�na sald�rma: %50 ihtimalle sald�r�n�z ba�ar�l� olur ve ba�ar�l� oldu�u durumda 2 kat hasar vurursunuz ama ba�ar�s�z olursan�z �skalam�� olursunuz ve hasar vuramazs�n�z.\n";
			cout << " (Rakibinizin �evikli�i sayesinde gelen ka��nma ihtimali bu y�zdeye dahil de�il yani sald�r� bittikten ve ba�ar�l� olduktan sonra ka��nma ihtimali hesaplan�r.)" << endl;
			cout << "Karakterin v�cuduna sald�rma: %100 ihtimalle sald�r�n�z ba�ar�l� olur ve ba�ar�l� oldu�unda normal hasar�n�z� vurursunuz." << endl;
			cout << "Karakterin kafas�na sald�rma: %10 ihtimalle sald�r�n�z ba�ar�l� olur ve ba�ar�l� oldu�u durumda 10 kat hasar vurursunuz ama ba�ar�s�z olursan�z �skalam�� olursunuz ve hasar vuramazs�n�z.\n";
			cout << " (Rakibinizin �evikli�i sayesinde gelen ka��nma ihtimali bu y�zdeye dahil de�il yani sald�r� bittikten ve ba�ar�l� olduktan sonra ka��nma ihtimali hesaplan�r.)" << endl << endl;
			goto githikayebitti;
		}
	}
	if (giris == 4)
	{
		cout << "Senaryo ve Kodlama:Berkcan Cibo�lu" << endl << "�leti�im: berkcan112233@gmail.com" << endl << endl;
		goto gitana;
	}
	if (giris == 1)
	{
		int cevap;
		cout << "E�er oyunu ilk defa oynayacaksan�z -Oyun nas�l oynan�yor- se�ene�ine bakman�z� �neririm." << endl;
		gitcvp:
		cout << "Oyun nas�l oynan�yora git[1'e bas�n�z] Oyuna devam et[2'ye bas�n�z]" << endl;
		cin >> cevap;
		cout << endl;
		if (cevap < 1 || cevap > 2)
		{
			cout << "L�tfen ge�erli bir se�enek se�iniz." << endl;
			goto gitcvp;
		}
		if (cevap == 1)
			goto gitoyunnasioynaniyor;
		if (cevap == 2)
		{
			goto oyunbaslasin;
		}
	}
oyunbaslasin:
	string isim, irkisim;
	int irk, guc=0, zeka=0, ceviklik=0, can=0, minhasar=0, makshasar=0, kacinma=0, kritik=0;
	cout << "(L�tfen t�rk�e karakter kullanmay�n.)\nKarakterinizin �smi: ";
	cin >> isim;
	cout << endl;
	cout << "Karakterinizin �rk�: " <<endl;
	cout << "Kuzeyli[1] (G��:7 �eviklik:2 Zeka:1)" << endl;
	cout << "G�neyli[2] (G��:2 �eviklik:7 Zeka:1)" << endl;
	cout << "Do�ulu[3]  (G��:3 �eviklik:5 Zeka:2)" << endl;
	cout << "Bat�l�[4]  (G��:1 �eviklik:2 Zeka:7)" << endl;
	gitsecim:
	cin >> irk;
	cout << endl;
	if (irk < 1 || irk >4)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitsecim;
	}
	if (irk == 1)
	{
		guc = 7;
		ceviklik = 2;
		zeka = 1;
		irkisim = "kuzeyli";
		cout << endl;
	}
	if (irk == 2)
	{
		guc = 2;
		ceviklik = 7;
		zeka = 1;
		irkisim = "g�neyli";
		cout << endl;
	}
	if (irk == 3)
	{
		guc = 3;
		ceviklik = 5;
		zeka = 2;
		irkisim = "do�ulu";
		cout << endl;
	}
	if (irk == 4)
	{
		guc = 1;
		ceviklik = 2;
		zeka = 7;
		irkisim = "g�neyli";
		cout << endl;
	}
	minhasar = guc;
	makshasar = guc * 2;
	can = guc * 4;
	kritik = ceviklik * 2;
	kacinma = ceviklik * 2;

	cout << "(Sersemlemi� bir �ekilde a�r�lar i�indesinizdir.)" << endl;
	cout << "Yabanc�: Hey, uyan!" << endl;
	cout << "Sen kimsin?[1] Noluyor?[2] Neredeyim?[3]" << endl;
	int cevap;
	gitsecim2:
	cin >> cevap;
	cout << endl;
	if(cevap > 3 || cevap < 1)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitsecim2;
	}
	else if (cevap == 1)
	{
		cout << "Yabanc�: T�pk� senin gibi bir mahkumum, ismimin bir �nemi yok." << endl;
	}
	else if (cevap == 2)
	{
		cout << "Yabanc�: Ne demek noluyor?" << endl;
	}
	else if (cevap == 3)
	{
		cout << "Yabanc�: Sence buras� nereye benziyor? Zindandas�n tabii ki de." << endl;
	}
	git3:
	cout << "Hi�bir �ey hat�rlam�yorum![1]" << endl;
	int teksec;
	cin >> teksec;
	cout << endl;
	if (teksec!=1)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto git3;
	}
	cout << "Yabanc�: San�r�m ba��na fazla sert darbe ald�n." << endl;
	git4:
	cout << "Ne demek istiyorsun?[1] Darbe derken?[2]" << endl;
	cin >> teksec;
	cout << endl;
	if (teksec < 1 || teksec > 2)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto git4;
	}
	cout << endl;
	git5:
	cout << "Yabanc�: Aman tanr�m, ger�ekten de hi�bir �ey hat�rlam�yorsun! �smin ne gen� " << irkisim << "?" << endl;
	cout << isim << ".[1]  Bu seni alakadar etmez.[2]" << endl;
	int seco;
	cin >> seco;
	cout << endl;
	if (seco > 2 || seco < 1)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto git5;
	}
	if (seco == 2)
	{
		cout << "Yabanc�: Oh hakl�s�n, san�r�m beni de bu kadar feci d�vseler ben de agresif olurdum." << endl;
	}
	if (seco == 1)
	{
		cout << "Yabanc�: �smini sevdim." << endl;
	}
	git6:
	cout << "Neden zindanday�m?[1] Neden ba��ma darbe ald�m?[2]" << endl;
	int ee;
	cin >> ee;
	cout << endl;
	if (ee > 2||ee<1)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto git6;
	}
	if (ee == 1)
	{
		cout << "Yabanc�: Asl�nda ba��na darbe alma sebebinle ayn� sebepten, K�l �mparatorlu�u kar��t� propoganda yapmaktan."<<endl;
		cout << "Sat�lm�� Do�ulular bizi al�p zindana att�lar, tabii bu s�rada bir g�zel d�vd�ler." << endl;
	}
	if (ee == 2)
	{
		cout << "Yabanc�: Asl�nda zindana girmenle ayn� sebepten, K�l �mparatorlu�u kar��t� propoganda yapmaktan." << endl;
		cout << "Sat�lm�� Do�ulular bizi al�p zindana att�lar, tabii bu s�rada bir g�zel d�vd�ler." << endl;
	}
	gitker: 
	cout << endl << "Demek b�yle haf�zam� kaybettim. Peki �imdik ne olacak?[1]" << endl;
	int ker;
	cin >> ker;
	cout << endl;
	if (ker!=1)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitker;
	}
	cout << endl << "Yabanc�: Burada malesef bir yarg� sistemi yok, zindandan ��kmak i�in tek �ans�m�z zindan d�v��lerini kazanmak." << endl;
	gitkero:
	cout << "O da ne?[1]" << endl;
	int kero;
	cin >> kero;
	cout << endl;
	if (kero != 1)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitkero;
	}
	cout << endl << "Yabanc�: Do�ulular�n zindandaki insanlar� besliyebilecek yemekleri az oldu�undan insanlar� e�lendirmek ve bahis sayesinde para kazanmak amac�yla haz�rlad�klar� �l�m d�v��leri." << endl;
	cout << "Zindanc�: Hey " << irkisim << " haz�rlan!" << endl;
	cout << "Zindanc�: Birazdan d�v���n ba�l�yacak, �u silahlardan birini ve dikkat et, �zerine iyi para yat�rd�m!" << endl;
	cout << "Yabanc�: San�r�m yolun sonuna geldik " << irkisim << ", haf�zan� kaybetti�in i�in d�v��ten �nce sana biraz temel e�itim vermemi ister misin?" << endl;
	gitsecok:
	cout << "�ok iyi olur![1]  D�v��meyi de bir mahkumdan ��renicek halimiz yok![2]" << endl;
	int aaa;
	cin >> aaa;
	cout << endl;
	if (aaa > 2 || aaa < 1)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitsecok;
	}
	if (aaa == 1)
	{
		cout << "Harika! Senin bir insanda bulunan 3 temel �zelli�ini geli�tirmeye �al��aca��m." << endl;
		cout << "�nce g�� e�itimiyle ba�layal�m." << endl << endl;
		cout << "-G�� E�itimi-\nKurallar: Klavyeden herhangi bir tu�a basabildi�iniz kadar h�zl� �ekilde 50 kere basman�z gerekir." << endl;
		cout << "E�er bu i�lerimi 10 saniyeden daha k�sa s�rede yapabilirseniz g�c�n�z 1 artacakt�r, yapamazsan�z e�itim ba�ar�s�z olacakt�r." << endl;
		gitsq:
		cout << "Ba�la[1]" << endl;
		int bab,basis;
		cin >> bab;
		cout << endl;
		if (bab!=1)
		{
			cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
			goto gitsq;
		}
		else
		{ 
			clock_t start;
			double duration;
				start = clock();

			for (basis = 1; basis < 50; basis++)
			{
				system("pause");
			}
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (duration < 10)
			{
				cout << "Tebrikler! G�� e�itimini ba�ar�yla tamamlad�n�z." << endl;
				cout << "Bitirme s�reniz: " << duration << endl;
				cout << "G�� +1" << endl;
				guc = guc + 1;
				goto gitegitimbitti;
			}
			else
			{
				cout << "Malesef e�itimi tamamlayamad�n�z." << endl;
				cout << "Bitirme s�reniz: " << duration << endl;
				goto gitegitimbitti;
			}
		}
		gitegitimbitti:
		cout << "S�rada �eviklik e�itimi var." << endl << endl;
		cout << "-�eviklik E�itimi-\nKurallar: Sana verilen 4 kelimeyi do�ru s�ralamayla en h�zl� ve do�ru �ekilde yazmaya �al��mal�s�n." << endl;
		cout << "E�er kelimeleri yazman 8 saniyeden uzun s�rerse veya yaz�m yanl��� yaparsan e�itim ba�ar�s�z olur." << endl;
		gitsa:
		cout << "Ba�la[1]" << endl;
		int ban;
		cin >> ban;
		cout << endl;
		if (ban != 1)
		{
			cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
			goto gitsa;
		}
		else
		{
			clock_t start;
			double zaman;
			start = clock();


			string dizi[5], a[5];
			int deger;
			dizi[1] = "tabii";
			dizi[2] = "balta";
			dizi[3] = "teferruat";
			dizi[4] = "muhtemel";
			cout <<"1-"<< dizi[1] <<" 2-" << dizi[2] << " 3-" << dizi[3] <<" 4-"<< dizi[4]<< endl;
			for (deger = 1; deger <= 4; deger++)
			{
				cout << deger << ". kelime: " << endl;
				cin >> a[deger];
				if (a[deger] != dizi[deger])
				{
					cout << "Malesef yaz�m yanl��� yapt���n�z i�in e�itiminiz ba�ar�s�z oldu." << endl;
					goto gitegos;
				}
			}
			zaman = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (zaman < 8)
			{
				cout << "Tebrikler! �eviklik e�itimini ba�ar�yla tamamlad�n�z." << endl;
				cout << "Bitirme s�reniz: " << zaman << endl;
				cout << "�eviklik +1" << endl;
				ceviklik = ceviklik + 1;
				goto gitegos;
			}
			else
			{
				cout << "Malesef e�itimi tamamlayamad�n�z." << endl;
				cout << "Bitirme s�reniz: " << zaman << endl;
				goto gitegos;
			}

		}
	gitegos:
		cout << endl << "S�rada zeka e�itimi var." << endl;
		cout << "-Zeka E�itimi-\nKurallar: Verilen 4 tane 4 i�lem sorusunu do�ru cevaplamaya �al��mal�s�n.(Say�lar rastgele belirlenmi�tir.)" << endl;
		cout << "E�er sorular� ��zmen 45 saniyeden uzun s�rerse veya sorular� yanl�� cevaplarsan e�itim ba�ar�s�z olur." << endl;
		cout << "Not: Zeka, di�er �zelliklere g�re kazan�lmas� daha zor bir �zelliktir." << endl;
	gitsabaq:
		cout << "Ba�la[1]" << endl;
		int banop;
		cin >> banop;
		cout << endl;
		if (banop != 1)
		{
			cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
			goto gitsabaq;
		}
		else
		{
			int random, random2, random3, random7, random6, random5, random4, cevap1, random8, cevap2, cevap3;
			float cevap4;
			clock_t start;
			double zamanzeka;
			start = clock();
			srand(time(NULL));
			random = rand() % 1000 + 1;
			random2 = rand() % 1000 + 1;
			cout << "Soru 1: " << random << "+" << random2 << "=";
			cin >> cevap1;
			cout << endl;
			if (cevap1 != random + random2)
			{
				cout << "Verdi�iniz cevap yanl��. E�itimi tamamlayamad�n�z." << endl;
				goto gitartik;
			}
			random3 = rand() % 1000 + 1;
			random4 = rand() % 1000 + 1;
			if (random3 > random4)
			{
				swap(random3, random4);
			}
			cout << "Soru 2: " << random4 << "-" << random3 << "=";
			cin >> cevap2;
			cout << endl;
			if (cevap2 != random4 - random3)
			{
				cout << "Verdi�iniz cevap yanl��. E�itimi tamamlayamad�n�z." << endl;
				goto gitartik;
			}
			random5 = rand() % 100 + 2;
			random6 = rand() % 10 + 2;
			cout << "Soru 3: " << random5 << "X" << random6 << "=";
			cin >> cevap3;
			cout << endl;
			if (cevap3 != random5 * random6)
			{
				cout << "Verdi�iniz cevap yanl��. E�itimi tamamlayamad�n�z." << endl;
				goto gitartik;
			}
			sayiuret:
			random8 = rand() % 100 + 1;
			if (random8 % 2 != 0 || random8 % 3 != 0)
			{
				goto sayiuret;
			}
			else
			{
				if (random8 % 2 == 0)
				{
					random7 = 2;
				}
				else if (random8 % 3 == 0)
				{
					random7 = 3;
				}
			}
			if (random7 > random8)
			{
				int bos;
				bos = random7;
				random7 = random8;
				random8 = bos;
			}
			cout << "Soru 4: " << random8 << "/" << random7 << "=";
			cin >> cevap4;
			cout << endl;
			if (cevap4 != random8 / random7)
			{
				cout << "Verdi�iniz cevap yanl��. E�itimi tamamlayamad�n�z." << endl;
				goto gitartik;
			}
			zamanzeka = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (zamanzeka > 45)
			{
				cout << "Size verilen s�renin �st�ne ��kt�n�z. E�itimi tamamlayamad�n�z." << endl;
				cout << zamanzeka;
				goto gitartik;
			}
			cout << "Tebrikler! Zeka e�itimini ba�ar�yla tamamlad�n�z." << endl;
			cout << "Bitirme s�reniz: " << zamanzeka << endl;
			cout << "Zeka +1" << endl;
			zeka = zeka + 1;
			goto gitartik;
		}
	}
	if (aaa == 2)
	{
		cout << "Yabanc�: ��renmenin sonu �l�m�n ba�lang�c�d�r." << endl;
		goto gitartik;
	}
	gitartik:
	gitsilah:
	cout << endl << "Yabanc�: Az vaktimiz kald�, �u silahlardan birini se�." << endl;
	cout << "Paslanm�� eski k�l��(G��:3 �eviklik:3)[1]" << endl;
	cout << "Paslanm�� eski g�rz(G��:5 �eviklik : 1)[2]" << endl;
	cout << "Paslanm�� eski balta(G��:3 �eviklik : 1)(rakibinizin sald�r�lar�n�z� engelleme ihtimali daha d���kt�r)[3]" << endl;
	cout << "Paslanm�� eski han�er(G��:1 �eviklik : 5)[4]" << endl;
	cout << "Paslanm�� eski �ift el baltas�(G��:4 �eviklik : 1)(rakibinizin sald�r�lar�n�z� engelleme ihtimali daha d���kt�r)[5]" << endl;
	cout << "Paslanm�� eski �ift el K�l�c�(G��:4 �eviklik : 2)[6]" << endl;
	cout << "Paslanm�� eski balyoz:(G��:6 �eviklik:0)[7]"<< endl;
	int silahsec,silahguc=0,silahcev=0,zirhguc=0,zirhcev=0;
	string silah, zirh="Ku�an�lan bir z�rh yok";
	cin >> silahsec;
	cout << endl;
	if (silahsec < 1 || silahsec >7)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitsilah;
	}
	if (silahsec == 1)
	{
		silahguc = 3;
		silahcev = 3;
		cout << "Yabanc�: Bir k�l�� ha! Demek bir gladyat�r gibi sava�mak istiyorsun." << endl;
		silah = "Paslanm�� eski k�l��";
	}
	if (silahsec == 2)
	{
		silahguc = 5;
		silahcev = 1;
		cout << "Yabanc�: Bir g�rz ha! Demek d��manlar�n�n kemiklerini k�rmak istiyorsun." << endl;
		silah = "Paslanm�� eski g�rz";
	}
	if (silahsec == 3)
	{
		silahguc = 3;
		silahcev = 1;
		cout << "Yabanc�: Bir balta ha! Demek bir kuzeyli gibi sava�mak istiyorsun." << endl;
		silah = "Paslanm�� eski balta";
	}
	if (silahsec == 4)
	{
		silahguc = 1;
		silahcev = 5;
		cout << "Yabanc�: Bir han�er ha! Demek bir suikast�i gibi sava�mak istiyorsun." << endl;
		silah = "Paslanm�� eski han�er";
	}
	if (silahsec == 5)
	{
		silahguc = 4;
		silahcev = 1;
		cout << "Yabanc�: Bir balta ha! Demek bir kuzeyli gibi sava�mak istiyorsun." << endl;
		silah = "Paslanm�� eski �ift el baltas�";
	}
	if (silahsec == 6)
	{
		silahguc = 4;
		silahcev = 2;
		cout << "Yabanc�: Bir k�l�� ha! Demek bir gladyat�r gibi sava�mak istiyorsun." << endl;
		silah = "Paslanm�� eski �ift el K�l�c�";
	}
	if (silahsec == 7)
	{
		silahguc = 6;
		silahcev = 0;
		cout << "Yabanc�: Bir g�rz ha! Demek d��manlar�n�n kemiklerini k�rmak istiyorsun." << endl;
		silah = "Paslanm�� eski balyoz";
	}
	cout << endl;
	cout << endl << "Yabanc�: Art�k haz�rs�n " << irkisim << ". E�er ikimiz de �lmez isek beni bir hafta sonra derin vadideki handa kumar masas�nda bul." << endl;
	cout << "Yabanc�: Bol �ans " << irkisim << ", bol �ans!" << endl;
	cout << "(Gardiyanlar seni k���k arenaya g�t�r�r.)" << endl;
	cout << "(Bahis oynay�p ba��ran insanlar bir �ember olu�turmu�, ortas�nda da mahkumlar sava��yor.)" << endl;
	gitkaa:
	int gecicigucbuff=0, geciciceviklikbuff=0;
	int dusguc = 0, duscan=0, duskacinma, duskritik, dusceviklik = 0, dusminhasar = 0, dusmakshasar = 0, dussilahguc = 0, dussilahcev = 0, duszirhguc = 0, duszirhcev = 0,duszeka=0;
	string duszirh, dussilah;
	int i=0, a=0;
	int randomsavas, randomkacinma, randomkritik, kacindimi, randomhasar;
	int vurdugunhasar, vuruldugunhasar;
	cout << "Senden �nceki mahkumlar�n sava��n� izle(sava� mekani�ini anlat�r)[1]  Senin sava��n ba�layana kadar g�z�n� kapat�p kendini haz�rla[2]" << endl;
	int kaa;
	cin >> kaa;
	cout << endl;
	if (kaa < 1 || kaa >2)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitkaa;
	}
	if (kaa == 1)
	{
		cout << "Oyunda basit bir sava� sistemi vard�r.\nOyunda sava� hamle hamle olur, hamle size geldi�inde sald�rma yolunuzu se�ersiniz." << endl;
		cout << "Sald�rma yollar�:" << endl;
		cout << "Karakterin bacaklar�na sald�rma: %50 ihtimalle sald�r�n�z ba�ar�l� olur ve ba�ar�l� oldu�u durumda 2 kat hasar vurursunuz ama ba�ar�s�z olursan�z �skalam�� olursunuz ve hasar vuramazs�n�z.\n";
		cout << " (Rakibinizin �evikli�i sayesinde gelen ka��nma ihtimali bu y�zdeye dahil de�il yani sald�r� bittikten ve ba�ar�l� olduktan sonra ka��nma ihtimali hesaplan�r.)" << endl;
		cout << "Karakterin v�cuduna sald�rma: %100 ihtimalle sald�r�n�z ba�ar�l� olur ve ba�ar�l� oldu�unda normal hasar�n�z� vurursunuz." << endl;
		cout << "Karakterin kafas�na sald�rma: %10 ihtimalle sald�r�n�z ba�ar�l� olur ve ba�ar�l� oldu�u durumda 10 kat hasar vurursunuz ama ba�ar�s�z olursan�z �skalam�� olursunuz ve hasar vuramazs�n�z.\n";
		cout << " (Rakibinizin �evikli�i sayesinde gelen ka��nma ihtimali bu y�zdeye dahil de�il yani sald�r� bittikten ve ba�ar�l� olduktan sonra ka��nma ihtimali hesaplan�r.)" << endl << endl;
		goto gitaga;
	}
	if (kaa == 2)
	{
		cout << "(Nefes al���n� d�zenlersin. [K�sa s�reli g��+1]";
		gecicigucbuff=gecicigucbuff+1;
		cout << "Gardiyan: (Alayc� bir dille) Ne o, �ampiyonlar ligine mi ��k�caks�n?\n(Kendi aralar�nda g�l���rler)" << endl;
		goto gitaga;
	}


	gituuu:
	gitaga:
	cout << "Zindan G�revlisi: " << irkisim << " senin s�ran, bakal�m nelerin varm��!" << endl;
	int secog;
	cout << "Ka�maya �al��(%20 ba�ar� ihtimali)[1] Siz �rk�� pisliklere nas�l sava��l�r g�sterece�im![2]" << endl;
	cin >> secog;
	cout << endl;
	if (secog < 1 || secog >2)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitaga;
	}
	if (secog == 1)
	{
		int kacissansi;
		kacissansi = rand() % 101 + 0;
		if (kacissansi <= 20)
		{
			cout << "Seni tutam gardiyan�n boynuna t�m g�c�nle vurduktan sonra, belindeki anahtarlar� ald�n." << endl;
			cout << "Anahtarla hemen yan�ndaki kap�y� a��p ��kt�ktan sonra di�er zindanc�lar �st�ne ko�arken kap�y� kilitledin ve anahtar� i�ine sokup k�rd�n." << endl;
			gitlala:
			cout << "Gardiyanlar�n tam surat�na orta parmak i�areti yap.[1]  Zaman yok, Ka�![2]" << endl;
			int lalala;
			cin >> lalala;
			cout << endl;
			if (lalala < 1 || lalala >2)
			{
				cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
				goto gitlala;
			}
			if (lalala == 1)
			{
				cout << "Sem gardiyanlara haraket yaparken i�lerinden birisi parmaklar�klar�n aras�ndan elini tutup parma��n� k�rd�, ard�ndan seni kendisine do�ru �ekip" << endl;
				cout << " han�eriyle karn�n� de�ti." << endl;
				cout << "�ld�n!" << endl;
				gituna:
				cout << "Son kay�tl� yere d�n[1] Ana men�ye d�n[2] ��k�� yap[3]" << endl;
				int lll;
				cin >> lll;
				cout << endl;
				if (lll < 1 || lll >3)
				{
					cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
					goto gituna;
				}
				if (lll == 1)
				{
					goto gitaga;
				}
				if (lll == 2)
				{
					goto gitana;
				}
				if (lll == 3)
				{
					return(0);
				}
			}
			if (lalala == 2)
			{
				cout << "�ans�na b�y�k kap� da a��kt�r. Hemen d��ar� ��kars�n ve karanl���n da yard�m� ile saklan�rs�n." << endl;
				cout << "Bir s�re bekledikten sonra art�k seni aram�yorlard�r. Sonunda �zg�rs�n." << endl;
				goto gitozgurluk;
			}
		}
		else 
		{
			cout << "Tam ka�maya �al��madan �nce gardiyan sende bir terslik oldu�unu sezip elini silah�na att�, ka�maya �al���nca ani davran�p bo�az�n� kesti." << endl;
			cout << "�lmeden �nce duydu�un son s�zler: �yi sava�abilece�ini d���nm��t�m, ne hayal k�r�kl��� ama" << endl;
			cout << "�ld�n!" << endl;
		gitlll:
			cout << "Son kay�tl� yere d�n[1] Ana men�ye d�n[2] ��k�� yap[3]" << endl;
			int uuu;
			cin >> uuu;
			cout << endl;
			if (uuu < 1 || uuu >3)
			{
				cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
				goto gitlll;
			}
			if (uuu == 1)
			{
				goto gituuu;
			}
			if (uuu == 2)
			{
				goto gitana;
			}
			if (uuu == 3)
			{
				return(0);
			}
		}
	}
	if (secog == 2)
	{
		gitdovusbaslio:
		int savo;
		cout << "Arenaya girdin." << endl;

		cout << endl << "Zorluk seviyesi se�iniz." << endl;
		gitzorluk:
		cout << "Kolay[1] Normal[2] Zor[3]" << endl;
		int zorluk, zorlukseviye;
		cin >> zorlukseviye;
		cout << endl;
		if (zorlukseviye < 1 || zorlukseviye >3)
		{
			cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
			goto gitzorluk;
		}
		if (zorlukseviye == 1)
		{
			zorluk = 3;
		}
		if (zorlukseviye == 2)
		{
			zorluk = 5;
		}
		if (zorlukseviye == 3)
		{
			zorluk = 10;
		}
		cout << endl;

		gityv:
		cout << "Rakibinin �zelliklerine ve oranlar�na bak.[1]  Kendi �zelliklerine ve oranlar�na bak.[2]  Sava�a ba�la.[3]" << endl;
		cin >> savo;
		cout << endl << endl;
		srand(time(NULL));


		//d��man stats
		dusguc = 2;
		dusceviklik = 7;
		duszeka = 1;
		dussilah = "Bronz g�rz";
		duszirh = "Pasl� eski hafif z�rh";
		dussilahguc = 4;
		dussilahcev = 1;
		duszirhcev = 3;
		duszirhguc = 0;
		dusminhasar = (dusguc + duszirhguc + dussilahguc);
		dusmakshasar = (dusguc + duszirhguc + dussilahguc)*2;
		duscan = (dusguc + duszirhguc + dussilahguc) * zorluk;
		duskritik = (dusceviklik + dussilahcev + duszirhcev) * 2;
		duskacinma = (dusceviklik + dussilahcev + duszirhcev) * 2;

		//karakter stats
		guc;
		ceviklik;
		zeka;
		silah;
		zirh;
		silahguc;
		silahcev;
		zirhguc = 0;
		zirhcev = 0;
		minhasar = (guc + gecicigucbuff + zirhguc + silahguc);
		makshasar = (guc + gecicigucbuff + zirhguc + silahguc) * 2;
		can = (guc + gecicigucbuff + zirhguc + silahguc) * 4;
		kritik = (ceviklik + geciciceviklikbuff + silahcev + zirhcev) * 2;
		kacinma = (ceviklik + geciciceviklikbuff + silahcev + zirhcev) * 2;
		
		
		if (savo == 1)
		{
			cout << "Irk: " << "G�neyli" << endl;
			cout << "Temel g��: " << dusguc << endl;
			cout << "Temel �eviklik: " << dusceviklik << endl;
			cout << "Temel zeka: " << duszeka << endl;
			cout << "Ku�an�lan silah: " << dussilah << endl;
			cout << "Ku�an�lan z�rh: " << duszirh << endl;
			cout << "Silah g�c�: " << dussilahguc << endl;
			cout << "Silah �evikli�i: " << dussilahcev << endl;
			cout << "Z�rh g�c�: " << duszirhguc << endl;
			cout << "Z�rh �evikli�i: " << duszirhcev << endl;
			cout << "Minimum hasar: " << (dusguc + duszirhguc + dussilahguc) << endl;
			cout << "Maksimum hasar: " << (dusguc + duszirhguc + dussilahguc) * 2 << endl;
			cout << "Can: " << (dusguc + duszirhguc + dussilahguc) * zorluk << endl;
			cout << "Kritik vuru� ihtimali: " << (dusceviklik + dussilahcev + duszirhcev) * 2 << endl;
			cout << "Ka��nma ihtimali: " << (dusceviklik + dussilahcev + duszirhcev) * 2 << endl;
			cout << endl;
			goto gityv;
		}
		if (savo == 2)
		{
			cout << "Irk: " << irkisim << endl;
			cout << "Temel g��: " << guc << endl;
			cout << "Temel �eviklik: " << ceviklik << endl;
			cout << "Temel zeka: " << zeka << endl;
			cout << "Kullan�lan Silah: " << silah << endl;
			cout << "Kullan�lan Z�rh: " << zirh << endl;
			cout << "Ge�ici g�� buffu: " << gecicigucbuff << endl;
			cout << "Ge�ici �eviklik buffu: " << geciciceviklikbuff << endl;
			cout << "Silah�n�z�n g�c�: " << silahguc << endl;
			cout << "Silah�n�z�n �evikli�i: " << silahcev << endl;
			cout << "Z�rh�n�z�n g�c�: " << zirhguc << endl;
			cout << "Z�rh�n�z�n �evikli�i: " << zirhcev << endl;
			cout << "Minimum hasar�n�z: " << (guc + gecicigucbuff + zirhguc + silahguc) << endl;
			cout << "Maksimum hasar�n�z: " << (guc + gecicigucbuff + zirhguc + silahguc) * 2 << endl;
			cout << "Can�n�z: " << (guc + gecicigucbuff + zirhguc + silahguc) * 4 << endl;
			cout << "Kritik vuru� ihtimaliniz: " << (ceviklik + geciciceviklikbuff + silahcev + zirhcev) * 2 << endl;
			cout << "Ka��nma ihtimaliniz: " << (ceviklik + geciciceviklikbuff + silahcev + zirhcev) * 2 << endl;
			cout << endl;
			goto gityv;
		}
		if (savo == 3)
		{
			int lak;
			gitlak:
			cout << "�lk hamleyi yapmaya �al��.(%50 ba�ar� �ans�)[1]" << endl;
			cout << "�lk hamlede savunma yap.(%60 ba�ar� �ans�)(Ba�ar� halinde ge�ici �eviklik buff)[2]" << endl;
			cin >> lak;
			cout << endl;
			if (lak < 1 || lak > 2)
			{
				cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
				goto gitlak;
			}
			if (lak == 1)
			{
				int rastgeleko;
				rastgeleko = rand() % 100 + 1;
				if (rastgeleko <= 50)
				{
					cout << "Ufak bir bo�u�madan sonra ilk hamleyi yapma f�rsat� kazand�n�z!" << endl;
					i = 2;
				}
				if (rastgeleko > 50)
				{
					cout << "Malesef rakibiniz sava�a iyi ba�lad�. �lk hamle s�ras� rakipte." << endl;
					i = 3;
					a = 3;
				}
			}
			if (lak == 2)
			{
				int rastgeleb;
				rastgeleb = rand() % 100 + 1;
				if (rastgeleb <= 60)
				{
					cout << "Ba�ar�l� bir �ekilde savunma yapt�n�z ve hamle s�ras� size ge�ti, Ge�ici �eviklik +1." << endl;
					i = 2;
				}
				if (rastgeleb > 60)
				{
					cout << "Malesef rakibin hamlesini savunamad�n�z, ilk hamle �ans�n� kaybettiniz." << endl;
					i = 3;
					a = 3;
				}
			}
			cout << endl;
			for (i; can > 0 && duscan > 0; i++)
			{
				cout << endl;
				if (i == 3 && a==3)
				{
					cout << "Hamle: " << (i - 2) << endl << endl;
					a = 55;
				}
				else
				{
				cout << "Hamle: " << (i - 1) << endl << endl;
				}
				if (i % 2 == 0)
				{
					if (i != 2)
					{ 
						cout << "Hamle s�ras� size ge�ti!" << endl;
						goto alba;
					}
					else
					{
						goto alba;
					}
					alba:
					gitagf:
					cout << "Rakibin v�cuduna sald�r.(ba�ar� ihtimali %100, hasar 1x)[1]" << endl;
					cout << "Rakibin bacaklar�na sald�r.(ba�ar� ihtimali %50, hasar 2x)[2]" << endl;
					cout << "Rakibin kafas�na sald�r.(ba�ar� ihtimali %10, hasar 10x)[3]" << endl;
					int agf;
					cin >> agf;
					cout << endl;
					if (agf < 1 || agf > 3)
					{
						cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
						goto gitagf;
					}
					if (agf == 1)
					{
						cout << "Sald�r�n�z ba�ar�l�!" << endl;
						randomkacinma = rand() % 100 + 1;
						if (randomkacinma <= duskacinma)
						{
							cout << "Ama rakibiniz hamlenizden ka��nd�!" << endl;
							cout << "D��man�n can�: " << duscan << endl;
							kacindimi = 1;
							goto hamlebitti;
						}
						else
						{
							cout << "Rakibiniz hamlenizden ka��namad�!" << endl;
							randomkritik = rand() % 100 + 1;
							
							if (randomkritik <= kritik)
							{
								vurdugunhasar = rand() % makshasar + 0;
								if (vurdugunhasar <= minhasar)
								{
									vurdugunhasar = vurdugunhasar + minhasar;
								}
								cout << "Kritik hasar vurdunuz!" << endl;
								duscan = duscan - vurdugunhasar * 2;
								cout << "Vurdu�unuz hasar: " << vurdugunhasar << endl;
								cout << "D��man�n yeni can�: " << duscan << endl;
								goto hamlebitti;
							}
							else
							{
								vurdugunhasar = rand() % makshasar + 0;
								if (vurdugunhasar <= minhasar)
								{
									vurdugunhasar = vurdugunhasar + minhasar;
								}
								cout << "Kritik hasar vuramad�n�z!" << endl;
								duscan = duscan - vurdugunhasar;
								cout << "Vurdu�unuz hasar: " << vurdugunhasar << endl;
								cout << "D��man�n yeni can�: " << duscan << endl;
								goto hamlebitti;
							}
						}
					}
					if (agf == 2)
					{
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 50)
						{
							cout << "Sald�r�n�z ba�ar�l�!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= duskacinma)
							{
								cout << "Ama rakibiniz hamlenizden ka��nd�!" << endl;
								cout << "D��man�n can�: " << duscan << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibiniz hamlenizden ka��namad�!" << endl;
								randomkritik = rand() % 100 + 1;

								if (randomkritik <= kritik)
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Kritik hasar vurdunuz!" << endl;
									duscan = duscan - vurdugunhasar * 2 * 2;
									cout << "Vurdu�unuz hasar: " << vurdugunhasar << endl;
									cout << "D��man�n yeni can�: " << duscan << endl;
									goto hamlebitti;
								}
								//Mutlu 1000 sat�rlar!
								else
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Kritik hasar vuramad�n�z!" << endl;
									duscan = duscan - vurdugunhasar*2;
									cout << "Vurdu�unuz hasar: " << vurdugunhasar << endl;
									cout << "D��man�n yeni can�: " << duscan << endl;
									goto hamlebitti;
								}
							}
						}
						else 
						{
							cout << "Sald�r�n�z ba�ar�s�z." << endl;
							cout << "D��man�n can�: " << duscan << endl;
							goto hamlebitti;
						}
					}
					if (agf == 3)
					{
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 10)
						{
							cout << "Sald�r�n�z ba�ar�l�!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= duskacinma)
							{
								cout << "Ama rakibiniz hamlenizden ka��nd�!" << endl;
								cout << "D��man�n can�: " << duscan << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibiniz hamlenizden ka��namad�!" << endl;
								randomkritik = rand() % 100 + 1;

								if (randomkritik <= kritik)
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Kritik hasar vurdunuz!" << endl;
									duscan = duscan - vurdugunhasar * 2 * 10;
									cout << "Vurdu�unuz hasar: " << vurdugunhasar << endl;
									cout << "D��man�n yeni can�: " << duscan << endl;
									goto hamlebitti;
								}
								else
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Kritik hasar vuramad�n�z!" << endl;
									duscan = duscan - vurdugunhasar * 10;
									cout << "Vurdu�unuz hasar: " << vurdugunhasar << endl;
									cout << "D��man�n yeni can�: " << duscan << endl;
									goto hamlebitti;
								}
							}
						}
						else
						{
							cout << "Sald�r�n�z ba�ar�s�z." << endl;
							cout << "D��man�n can�: " << duscan << endl;
							goto hamlebitti;
						}
					}
				}
				else
				{
					int agf;
					agf = rand() % 100 + 1;
					cout << endl;
					if (agf <= 40)
					{
						cout << "D��man�n�z baca��n�za sald�rmaya �al��t�!" << endl;
						cout << "D��man�n sald�r�s� ba�ar�l�!" << endl;
						randomkacinma = rand() % 100 + 1;
						if (kacinma <= kacinma)
						{
							cout << "Ama d��man�n hamlensinden ka��nd�n�z!" << endl;
							cout << "Can�n�z: " << can << endl;
							kacindimi = 1;
							goto hamlebitti;
						}
						else
						{
							cout << "Rakibinizin hamlesinden ka��namad�n�z!" << endl;
							randomkritik = rand() % 100 + 1;

							if (randomkritik <= duskritik)
							{
								vurdugunhasar = rand() % dusmakshasar + 0;
								if (vurdugunhasar <= dusminhasar)
								{
									vurdugunhasar = vurdugunhasar + dusminhasar;
								}
								cout << "Rakibiniz kritik hasar vurdu!" << endl;
								can = can - vurdugunhasar * 2;
								cout << "Yedi�iniz hasar: " << vurdugunhasar << endl;
								cout << "Yeni can�n�z: " << can << endl;
								goto hamlebitti;
							}
							else
							{
								vurdugunhasar = rand() % dusmakshasar + 0;
								if (vurdugunhasar <= dusminhasar)
								{
									vurdugunhasar = vurdugunhasar + dusminhasar;
								}
								cout << "D��man kritik hasar vuramad�!" << endl;
								can = can - vurdugunhasar;
								cout << "Yedi�iniz hasar: " << vurdugunhasar << endl;
								cout << "Yeni can�n�z: " << can << endl;
								goto hamlebitti;
							}
						}
					}
					if (agf > 40 && agf <= 90 )
					{
						cout << "D��man�n�z baca��n�za sald�rmaya �al��t�!" << endl;
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 50)
						{
							cout << "D��man�n�z�n sald�r�s� ba�ar�l�!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= kacinma)
							{
								cout << "Ama rakibiniziz hamlesinden ka��nd�n�z!" << endl;
								cout << "Can�n�z: " << can << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibiniz hamlenizden ka��namad�!" << endl;
								randomkritik = rand() % 100 + 1;

								if (randomkritik <= duskritik)
								{
									vurdugunhasar = rand() % dusmakshasar + 0;
									if (vurdugunhasar <= dusminhasar)
									{
										vurdugunhasar = vurdugunhasar + dusminhasar;
									}
									cout << "Kritik hasar yediniz!" << endl;
									can = can - vurdugunhasar * 2 * 2;
									cout << "Yedi�iniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni can�n�z: " << duscan << endl;
									goto hamlebitti;
								}
								else
								{
									vurdugunhasar = rand() % dusmakshasar + 0;
									if (vurdugunhasar <= dusminhasar)
									{
										vurdugunhasar = vurdugunhasar + dusminhasar;
									}
									cout << "D��man�n�z Kritik hasar vuramad�!" << endl;
									can = can - vurdugunhasar * 2;
									cout << "Yedi�iniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni can�n�z: " << can << endl;
									goto hamlebitti;
								}
							}
						}
						else
						{
							cout << "D��man�n�n sald�r�s� ba�ar�s�z." << endl;
							cout << "Can�n�z: " << can << endl;
							goto hamlebitti;
						}
					}
					if (agf > 90 && agf <= 100)
					{
						cout << "D��man�n�z kafan�za sald�rmaya �al��t�!" << endl;
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 10)
						{
							cout << "Rakibinizin sald�r�s� ba�ar�l�!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= kacinma)
							{
								cout << "Ama rakibinizin hamlesinden ka��nd�n�z!" << endl;
								cout << "Can�n�z: " << can << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibinizin hamlesinden ka��namad�n�z!" << endl;
								randomkritik = rand() % 100 + 1;

								if (randomkritik <= duskritik)
								{
									vurdugunhasar = rand() % dusmakshasar + 0;
									if (vurdugunhasar <= dusminhasar)
									{
										vurdugunhasar = vurdugunhasar + dusminhasar;
									}
									cout << "Kritik hasar yediniz!" << endl;
									can = can - vurdugunhasar * 2 * 10;
									cout << "Yedi�iniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni can�n�z: " << can << endl;
									goto hamlebitti;
								}
								else
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Rakibiniz kritik hasar vuramad�!" << endl;
									can = can - vurdugunhasar * 10;
									cout << "Yedi�iniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni can�n�z: " << can << endl;
									goto hamlebitti;
								}
							}
						}
						else
						{
							cout << "Rakibinizin sald�r�s� ba�ar�s�z." << endl;
							cout << "Can�n�z: " << can << endl;
							goto hamlebitti;
						}
					}
				}
				hamlebitti:
				cout << endl;
			}
			if (can <= 0)
			{
				cout << "�ld�n!" << endl;
			gitane:
				cout << "Son kay�tl� yere d�n[1] Ana men�ye d�n[2] ��k�� yap[3]" << endl;
				int ppp;
				cin >> ppp;
				cout << endl;
				if (ppp < 1 || ppp >3)
				{
					cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
					goto gitane;
				}
				if (ppp == 1)
				{
					goto gitdovusbaslio;
				}
				if (ppp == 2)
				{
					goto gitana;
				}
				if (ppp == 3)
				{
					return(0);
				}
			}
			cout << "Kazand�n!" << endl;
			cout << "Etraf kan ve rakibinin i� organ�yla dolu, etraf�nda insanlar�n yar�s� heyecandan ba��r�yor di�er yar�s� ile kaybettikleri bahisleri dolay�s�yla somurtuyor." << endl;
			cout << "Gardiyan: Tebrikler gen� " << irkisim << " a��k�as� senden b�yle bir performans beklemiyordum! Beni ve burdaki herkesi �a��rtt�n." << endl;
			cout << "Gardiyan: ��te, art�k �zg�rs�n. E�er can�n tekrar insanlar� do�ramak isterse beni nerede bulabilece�ini biliyorsun." << endl;
			cout << "Gardiyan: Hem kazan�lan bahisin de %20sini al�rs�n! Yolun a��k olsun." << endl;
			cout << "A�r�lar i�inde d��ar� ��kars�n. Hava karanl�kt�r." << endl;
			goto gitozgurluk;
		}
	}
	gitozgurluk:
	cout << endl;
	cout << "Hava karanl�k, etraf samanl�k civarda sadece k�ye giden bir yol var." << endl;
	cout << "Ne yapmak istersin?" << endl;
	gitnapcan:
	cout << "Yoldan hana do�ru git[1]  Samanl�klara, hi�li�e do�ru git[2]" << endl;
	int napcan;
	cin >> napcan;
	cout << endl;
	if (napcan < 1 || napcan >2)
	{
		cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
		goto gitnapcan;
	}
	else 
	{
		cout << "Oyunun demo s�r�m�n�n sonuna geldiniz." << endl;
		cout << "Oyunumu oynad���n�z i�in te�ekk�rler." << endl;
		cout << "E�er feedback vermek istiyorsan�z mail adresim: berkcan112233@gmail.com" << endl;
		gitdemo:
		cout << "Ana men�ye d�n.[1]  ��k�� yap.[2]" << endl;
		int demo;
		cin >> demo;
		if (demo < 1 || demo >2)
		{
			cout << "L�tfen ge�erli say�lar aras�nda se�im yap�n�z." << endl << endl;
			goto gitdemo;
		}
		if (demo == 1)
		{
			goto gitana;
		}
		if (demo == 2)
		{
			return(0);
		}
	}
}