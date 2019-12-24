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
	cout << "TiXi'ye hoþ geldiniz!" << endl << endl << endl;
	gitana:
	cout << "-Ana Menü-" << endl;
	girisgit:
	cout << "Ne yapmak istersiniz?" << endl;
	cout << "Yeni oyuna baþla[1'e basýn]\nOyun yükle[2'ye basýn] (demoda mevcut deðil)" << endl;
	cout << "Oyun nasýl oynanýyor?[3'e basýn]\nYapýmda emeði geçenler[4'e basýn]\nÇýkýþ yap[5'e basýn]" << endl;

	cin >> giris;
	cout << endl;
	if (giris > 5 || giris < 1)
	{ 
		cout << "Lütfen geçerli bir komut giriniz." << endl;
		goto girisgit;
	}
	if (giris == 5)
	{
		cout << "Oyunumu oynadýðýn için teþþeküler!." << endl;
		return (0);
	}
	if (giris == 2)
	{
		cout << endl << "Malesef oyunun demo versiyonunda bu seçenek etkin deðildir." << endl;
		goto gitana;
	}
	if (giris == 3)
	{
		int bilgi, kontrol;
		gitoyunnasioynaniyor:
		cout << endl << endl;
		cout << "TiXi hayali bir orta dünyada geçen interaktif yazý tabanlý oyundur.\nKarakterinizi oluþturduktan sonra vericeðiniz kararlar doðrultusunda ";
		cout << "hikaye geliþir." << endl;
		gitanlamamis:		
		cout << "Oyunun temel oynanýþ biçimi size yöneltilen seçenekleri klavyeden rakam girerek kontrol etmenizdir." << endl;
		cout << "Genelde bu olay [rakam] þeklinde olur" << endl << endl;
		gitkontrol:
		cout << "(Örnek) Anladýnýz mý?" << endl << "Evet[1] Hayýr[2]"<<endl;
		cin >> kontrol;
		cout << endl;
		if (kontrol < 1 || kontrol > 2)
			{
			cout << "Lütfen belirli rakamlar arasýnda seçim yapýnýz.(1,2)"<<endl;
			goto gitkontrol;
			}
		if(kontrol==2)
			{
			goto gitanlamamis;
			}
		if (kontrol == 1)
		cout << "Tebrikler! Oyunun mekaniðini çözdünüz." << endl << endl;
		cout << "Oyunda þimdilik(v0.1) 4 temel ýrk vardýr.\nBunlar:Kuzeyli, Güneyli, Batýlý, Doðulu." << endl;
		cout << "Bu ýrklarýn her biri 3 temel özelliðe kendi ýrklarýna göre belirli derecede sahip olurlar." << endl;
		cout << "3 temel özellik: Güç, Zeka, Çeviklik\nÞimdilik (v0.2) karakterlerin giyebileceði 10 çeþit eþya vardýr\nBu eþyalarýn her birisi ";
		cout << "belirli özelliklere eþya türüne göre belirli derecede sahiptir." << endl;
		cout << "Oyunda basit bir savaþ sistemi vardýr" << endl<<endl;
		gitq: githikayebitti:
		cout << "Baþka bilgi ister misiniz?" << endl;
		cout << "Hikayeden bahset[1] Eþyalardan bahset[2] Irklardan bahset[3] Özelliklerden bahset[4]\nSavaþ sisteminden bahset[5] Ana menüye dön[6]" << endl;
		cin >> bilgi;
		cout << endl;
		if (bilgi < 1 || bilgi>6)
		{
			cout << "Lütfen belirli rakamlar arasýnda seçim yapýnýz.(1,6)" << endl << endl;
			goto gitq;
		}
		if (bilgi == 6)
		{
			goto gitana;
		}
		if (bilgi == 1)
		{
			cout << "Hikayeyi oyun içinde oyunu oynayarak öðreniceksiniz ama hikayeyi basitçe anlatmak gerekirse, Dünya tek bir kara parçasýndan oluþuyordu";
			cout << " ve bu kara parçasý büyük bir artý þekline benziyordu.\nKara parçasýnýn þeklinden dolayý ilk insanlar Dünyanýn ortasýnda yaþýyorlardý." << endl;
			cout << "Ýlerleyen zamanlarda azalan kaynaklar ve artan popülasyondan dolayý insanlar artý þeklindeki karanýn 4 bir tarafýna eþit olarak daðýldý";
			cout << " ve artýnýn her bir köþesinde eþit kara parçalarý ile 4 farklý imparatorluk kuruldu.\nDoðudaki imparatorluk Güneþ Ýmparatorluðu,";
			cout << " Batýdaki imparatorluk Ay Ýmparatorluðu, Kuzeydeki imparatorluk Beyaz Ýmparatorluðu, Güneydeki Ýmparatorluk Ateþ Ýmparatorluðudur." << endl;
			cout << "Milletler kendi ülkelerine yerleþti ve artý þeklindeki karenin ortasýný ortak bölge olarak belirleyip Alaz Antlaþmasýný imzalardýlar." << endl;
			cout << "Bu antlaþmaya göre orta bölgeye alaz ismi verildi ve bu bölgede kesici alet bulundurmak, herhangi bir kaynaðýna zarar vermek, üstünde hak";
			cout << " talep etmek yasaklandý.\nBu maddelere uymayan ülkelere ortak savaþ açýlacaktý.\nÜlkeler uzun süre boyunca huzur içinde yaþadý ancak";
			cout << " ilerleyen yýllarda Dünyanýn güneyinde olan kuraklýktan dolayý Ateþ Ýmparatorluðu sefalet çekmeye baþladý.\nDiðer ülkelerden yardým";
			cout << " isteseler de geliþen refahla birlikte insanlar becilleþmiþti.\nSadece Güneþ Ýmparatorluðu, Ateþ Ýmparatorluðuna yardým etmeye çalýþsa da";
			cout << " tek bir ülkenin yardýmýyla Ateþ Ýmpartorluðu bir yere kadar dayanabildi.\nNüfusunun büyük bir çoðunluðu açlýktan ve hastalýktan öldü, Saray";
			cout << " halk tarafýndan yaðmalanýp soylular tek tek öldürüldü ve bu nedenle imparatorluk çöktü.\nArtýk Dünyanýn Güneyi insanlarýn birbirinden";
			cout << " baðýmsýz ve rastgele yaþadýðý kurak topraklardý.\nBu olay bin yýllar boyu sürdü ama daha sonrasýnda Güney topraklarýndan Yüzýrs adlý bir";
			cout << " savaþçý çýktý.\nBu savaþçýnýn sýradýþý bir özelliði vardý hayvanlarla anlaþabiliyordu ve üstün bir ikna kabiliyeti vardý." << endl;
			cout << "Savaþçýnýn bu özelliði hiç de azýmsanamýyacak bir özellikti bunun sebebi bin yýllar boyunca el deðmemiþ þekilde devam eden Alaz bölgesinde";
			cout << " artan otçu hayvanlardan ve alanýn dar olmasý etçil hayvanlarýn evrimleþmesine yol açtý.\nEtobur hayvanlarýn derileri sertleþti ve boyutlarý büyüdü.\n";
			cout << "Yüzýrs küçük yaþta bütün ailesini açlýktan dolayý kaybetmiþti ve bu yüzden imparatorluklara bir kini vardý.\nBu kin o kadar büyüktü ki yüzýrsýn";
			cout << " kalbini artýk saf karanlýk kaplamýþtý.\nYüzýrs daha sonrasýnda kendisi gibi yetenekli 3 kiþi daha bulup ''TiXi'' örgütünü kurdu." << endl;
			cout << "Bu örgüt sayesinde daðýlmýþ ateþ imparatorluðunu bir araya getirdi ve Alaz topraklarýna yerleþtirdi ve Kül Ýmparatoluðunu kurdu." << endl;
			cout << "Bütün imparatorluklar ayný anda bu imparatoluða savaþ açsa da çok fazla hayvan vardý.\nEvrimleþmiþ köstebekler surlarýn altýndan büyük tüneller";
			cout << " açýyordu, köpekbalýklarý ve balinalar imparatorluklarýn donanmalarýný yok ediyorlardý, yýrtýcý hayvanlar sayesinde de imparatorluklarý";
			cout << " püskürtüp çok rahat bir þekilde karþý saldýrý yapýyorlardý.\nKýsa süre içinde savaþ sonuçlandý ve imparatorluklar bu güce dayanamayýp boyun eðdiler." << endl;
			cout << "Kül Ýmparatorluðu, bütün imparatorluklarý vergiye baðlamýþ ve hýzla süper güç olmuþtu.\nOyunumuz bu dönemde TiXi örgütüne karþý çýkmaya çalýþan bir";
			cout << " savaþçýyý anlatýyor." << endl << endl;
			goto githikayebitti;
		}
		if (bilgi == 2)
		{
			cout << "Eþyalarýn kendi tiplerine has güçleri vardýr.\nBu güçler karakterinizin güçleri ile birleþir.\nEþya özellikleri þöyledir:" << endl << endl;
			cout << "Kýlýç: Güç ve çeviklik deðeri dengelidir.\nGürz: Güç deðeri çeviklik deðerine göre daha fazladýr." << endl;
			cout << "Balta: Güç deðeri çeviklik deðerine göre daha fazladýr.(Güç deðeri gürze göre daha azdýr.) ve balta saldýrýlarýnýn engellenme ihtimali daha düþüktür." << endl;
			cout << "Hançer: Çeviklik deðeri güç deðerine göre daha fazladýr.\nÇift El Baltasý: Normal baltaya göre güç deðeri çeviklik deðerinden daha da fazladýr." << endl;
			cout << "Çift El Kýlýcý: Normal kýlýca göre güç deðeri çeviklik deðerinden daha fazladýr.\nBalyoz: Gürze göre güç deðeri çeviklik deðerinden daha fazladýr." << endl;
			cout << "Aðýr Zýrh: Güç deðerinizi arttýrýr.\nHafif Zýrh: Çeviklik deðerinizi arttýrýr." << endl;
			cout << endl;
			goto githikayebitti;
		}
		if (bilgi == 3)
		{
			cout << "Oyunda 4 adet ýrk vardýr.\nBu ýrklar ve ýrklarýn özellikleri þöyledir:\nKuzeyli: Oyuna baþlangýç özellikleri þu þekildedir. (Güç:7 Çeviklik:2 Zeka:1)."<<endl;
			cout << "Kuzeyliler Beyaz Ýmparatorluðunda yaþayan, asýrlardýr denizcilikle ilgilenen uzun boylu insanlardýr." << endl;
			cout << "Batýlý: Oyuna baþlangýç özellikleri þu þekildedir. (Güç:1 Çeviklik:2 Zeka:7)." << endl;
			cout << "Batýlýlar Ay Ýmparatorluðunda yaþayan, Bilimle oldukça ilgilenen bir ýrktýr." << endl;
			cout << "Doðulu: Oyuna baþlangýç özellikleri þu þekildedir. (Güç:3 Çeviklik:5 Zeka:2)" << endl;
			cout << "Doðulular Güneþ Ýmparatorluðunda yaþayan, genelde tarým ve hayvancýlýk ile uðraþan insanlardýr." << endl;
			cout << "Güneyli: Oyuna baþlangýç özellikleri þu þekildedir. (Güç:2 Çeviklik:7 Zeka:1)" << endl;
			cout << "Güneyliler yýkýlmadan önce Ateþ Ýmparatorluðunda yaþamýþ, ondan sonra da kurak bölgede hayatta kalabilmek için kendilerini geliþtirmiþ insanlardýr." << endl << endl;
			goto githikayebitti;
		}
		if (bilgi == 4)
		{
			cout << "Oyunda 3 adet özellik vardýr bu güçler ve özellikleri þu þekildedir." << endl;
			cout << "Güç: Karþýnýzdaki düþmana vurabileceðiniz minimum ve maksimum hasarý ve can deðerinizi belirler." << endl;
			cout << "(Minumum hasarýnýz = Gücünüz, Maksimum hasarýnýz = Gücünüzün iki katý, Canýnýz = Gücünüzün 4 katý.)" << endl;
			cout << "Çeviklik: Karþýnýzdaki düþmanýn saldýrýsýndan kaçýnma(saldýrýyý ýskalattýrma) þansýnýzý ve kritik hasar vurabilme þansýnýzý belirler." << endl;
			cout << "Çevikliðinizin iki katý=Yüzdelik kaçýnma ihtimaliniz, Çevikliðinizin iki katý=Yüzdelik kritik vurma þansýnýz." << endl;
			cout << "Zeka: Oyunda ilerlemek için gerekli bazý kitaplarý okuyabilmenizi saðlar ve oyunda bazý alternatif seçenekleri seçebilmenizi saðlar." << endl;
			cout << "Oyunda özelliklerinizi karþýnýza çýkan fýrsatlar sayesinde geliþtirebilirsiniz(Bu mekaniði oyunu oynarken göreceksiniz.)" << endl << endl;
			goto githikayebitti;
		}
		if (bilgi == 5)
		{
			cout << "Oyunda basit bir savaþ sistemi vardýr.\nOyunda savaþ hamle hamle olur, hamle size geldiðinde saldýrma yolunuzu seçersiniz." << endl;
			cout << "Saldýrma yollarý:" << endl;
			cout << "Karakterin bacaklarýna saldýrma: %50 ihtimalle saldýrýnýz baþarýlý olur ve baþarýlý olduðu durumda 2 kat hasar vurursunuz ama baþarýsýz olursanýz ýskalamýþ olursunuz ve hasar vuramazsýnýz.\n";
			cout << " (Rakibinizin çevikliði sayesinde gelen kaçýnma ihtimali bu yüzdeye dahil deðil yani saldýrý bittikten ve baþarýlý olduktan sonra kaçýnma ihtimali hesaplanýr.)" << endl;
			cout << "Karakterin vücuduna saldýrma: %100 ihtimalle saldýrýnýz baþarýlý olur ve baþarýlý olduðunda normal hasarýnýzý vurursunuz." << endl;
			cout << "Karakterin kafasýna saldýrma: %10 ihtimalle saldýrýnýz baþarýlý olur ve baþarýlý olduðu durumda 10 kat hasar vurursunuz ama baþarýsýz olursanýz ýskalamýþ olursunuz ve hasar vuramazsýnýz.\n";
			cout << " (Rakibinizin çevikliði sayesinde gelen kaçýnma ihtimali bu yüzdeye dahil deðil yani saldýrý bittikten ve baþarýlý olduktan sonra kaçýnma ihtimali hesaplanýr.)" << endl << endl;
			goto githikayebitti;
		}
	}
	if (giris == 4)
	{
		cout << "Senaryo ve Kodlama:Berkcan Ciboðlu" << endl << "Ýletiþim: berkcan112233@gmail.com" << endl << endl;
		goto gitana;
	}
	if (giris == 1)
	{
		int cevap;
		cout << "Eðer oyunu ilk defa oynayacaksanýz -Oyun nasýl oynanýyor- seçeneðine bakmanýzý öneririm." << endl;
		gitcvp:
		cout << "Oyun nasýl oynanýyora git[1'e basýnýz] Oyuna devam et[2'ye basýnýz]" << endl;
		cin >> cevap;
		cout << endl;
		if (cevap < 1 || cevap > 2)
		{
			cout << "Lütfen geçerli bir seçenek seçiniz." << endl;
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
	cout << "(Lütfen türkçe karakter kullanmayýn.)\nKarakterinizin Ýsmi: ";
	cin >> isim;
	cout << endl;
	cout << "Karakterinizin ýrký: " <<endl;
	cout << "Kuzeyli[1] (Güç:7 Çeviklik:2 Zeka:1)" << endl;
	cout << "Güneyli[2] (Güç:2 Çeviklik:7 Zeka:1)" << endl;
	cout << "Doðulu[3]  (Güç:3 Çeviklik:5 Zeka:2)" << endl;
	cout << "Batýlý[4]  (Güç:1 Çeviklik:2 Zeka:7)" << endl;
	gitsecim:
	cin >> irk;
	cout << endl;
	if (irk < 1 || irk >4)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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
		irkisim = "güneyli";
		cout << endl;
	}
	if (irk == 3)
	{
		guc = 3;
		ceviklik = 5;
		zeka = 2;
		irkisim = "doðulu";
		cout << endl;
	}
	if (irk == 4)
	{
		guc = 1;
		ceviklik = 2;
		zeka = 7;
		irkisim = "güneyli";
		cout << endl;
	}
	minhasar = guc;
	makshasar = guc * 2;
	can = guc * 4;
	kritik = ceviklik * 2;
	kacinma = ceviklik * 2;

	cout << "(Sersemlemiþ bir þekilde aðrýlar içindesinizdir.)" << endl;
	cout << "Yabancý: Hey, uyan!" << endl;
	cout << "Sen kimsin?[1] Noluyor?[2] Neredeyim?[3]" << endl;
	int cevap;
	gitsecim2:
	cin >> cevap;
	cout << endl;
	if(cevap > 3 || cevap < 1)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitsecim2;
	}
	else if (cevap == 1)
	{
		cout << "Yabancý: Týpký senin gibi bir mahkumum, ismimin bir önemi yok." << endl;
	}
	else if (cevap == 2)
	{
		cout << "Yabancý: Ne demek noluyor?" << endl;
	}
	else if (cevap == 3)
	{
		cout << "Yabancý: Sence burasý nereye benziyor? Zindandasýn tabii ki de." << endl;
	}
	git3:
	cout << "Hiçbir þey hatýrlamýyorum![1]" << endl;
	int teksec;
	cin >> teksec;
	cout << endl;
	if (teksec!=1)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto git3;
	}
	cout << "Yabancý: Sanýrým baþýna fazla sert darbe aldýn." << endl;
	git4:
	cout << "Ne demek istiyorsun?[1] Darbe derken?[2]" << endl;
	cin >> teksec;
	cout << endl;
	if (teksec < 1 || teksec > 2)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto git4;
	}
	cout << endl;
	git5:
	cout << "Yabancý: Aman tanrým, gerçekten de hiçbir þey hatýrlamýyorsun! Ýsmin ne genç " << irkisim << "?" << endl;
	cout << isim << ".[1]  Bu seni alakadar etmez.[2]" << endl;
	int seco;
	cin >> seco;
	cout << endl;
	if (seco > 2 || seco < 1)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto git5;
	}
	if (seco == 2)
	{
		cout << "Yabancý: Oh haklýsýn, sanýrým beni de bu kadar feci dövseler ben de agresif olurdum." << endl;
	}
	if (seco == 1)
	{
		cout << "Yabancý: Ýsmini sevdim." << endl;
	}
	git6:
	cout << "Neden zindandayým?[1] Neden baþýma darbe aldým?[2]" << endl;
	int ee;
	cin >> ee;
	cout << endl;
	if (ee > 2||ee<1)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto git6;
	}
	if (ee == 1)
	{
		cout << "Yabancý: Aslýnda baþýna darbe alma sebebinle ayný sebepten, Kül Ýmparatorluðu karþýtý propoganda yapmaktan."<<endl;
		cout << "Satýlmýþ Doðulular bizi alýp zindana attýlar, tabii bu sýrada bir güzel dövdüler." << endl;
	}
	if (ee == 2)
	{
		cout << "Yabancý: Aslýnda zindana girmenle ayný sebepten, Kül Ýmparatorluðu karþýtý propoganda yapmaktan." << endl;
		cout << "Satýlmýþ Doðulular bizi alýp zindana attýlar, tabii bu sýrada bir güzel dövdüler." << endl;
	}
	gitker: 
	cout << endl << "Demek böyle hafýzamý kaybettim. Peki þimdik ne olacak?[1]" << endl;
	int ker;
	cin >> ker;
	cout << endl;
	if (ker!=1)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitker;
	}
	cout << endl << "Yabancý: Burada malesef bir yargý sistemi yok, zindandan çýkmak için tek þansýmýz zindan dövüþlerini kazanmak." << endl;
	gitkero:
	cout << "O da ne?[1]" << endl;
	int kero;
	cin >> kero;
	cout << endl;
	if (kero != 1)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitkero;
	}
	cout << endl << "Yabancý: Doðulularýn zindandaki insanlarý besliyebilecek yemekleri az olduðundan insanlarý eðlendirmek ve bahis sayesinde para kazanmak amacýyla hazýrladýklarý ölüm dövüþleri." << endl;
	cout << "Zindancý: Hey " << irkisim << " hazýrlan!" << endl;
	cout << "Zindancý: Birazdan dövüþün baþlýyacak, þu silahlardan birini ve dikkat et, üzerine iyi para yatýrdým!" << endl;
	cout << "Yabancý: Sanýrým yolun sonuna geldik " << irkisim << ", hafýzaný kaybettiðin için dövüþten önce sana biraz temel eðitim vermemi ister misin?" << endl;
	gitsecok:
	cout << "Çok iyi olur![1]  Dövüþmeyi de bir mahkumdan öðrenicek halimiz yok![2]" << endl;
	int aaa;
	cin >> aaa;
	cout << endl;
	if (aaa > 2 || aaa < 1)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitsecok;
	}
	if (aaa == 1)
	{
		cout << "Harika! Senin bir insanda bulunan 3 temel özelliðini geliþtirmeye çalýþacaðým." << endl;
		cout << "Önce güç eðitimiyle baþlayalým." << endl << endl;
		cout << "-Güç Eðitimi-\nKurallar: Klavyeden herhangi bir tuþa basabildiðiniz kadar hýzlý þekilde 50 kere basmanýz gerekir." << endl;
		cout << "Eðer bu iþlerimi 10 saniyeden daha kýsa sürede yapabilirseniz gücünüz 1 artacaktýr, yapamazsanýz eðitim baþarýsýz olacaktýr." << endl;
		gitsq:
		cout << "Baþla[1]" << endl;
		int bab,basis;
		cin >> bab;
		cout << endl;
		if (bab!=1)
		{
			cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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
				cout << "Tebrikler! Güç eðitimini baþarýyla tamamladýnýz." << endl;
				cout << "Bitirme süreniz: " << duration << endl;
				cout << "Güç +1" << endl;
				guc = guc + 1;
				goto gitegitimbitti;
			}
			else
			{
				cout << "Malesef eðitimi tamamlayamadýnýz." << endl;
				cout << "Bitirme süreniz: " << duration << endl;
				goto gitegitimbitti;
			}
		}
		gitegitimbitti:
		cout << "Sýrada çeviklik eðitimi var." << endl << endl;
		cout << "-Çeviklik Eðitimi-\nKurallar: Sana verilen 4 kelimeyi doðru sýralamayla en hýzlý ve doðru þekilde yazmaya çalýþmalýsýn." << endl;
		cout << "Eðer kelimeleri yazman 8 saniyeden uzun sürerse veya yazým yanlýþý yaparsan eðitim baþarýsýz olur." << endl;
		gitsa:
		cout << "Baþla[1]" << endl;
		int ban;
		cin >> ban;
		cout << endl;
		if (ban != 1)
		{
			cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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
					cout << "Malesef yazým yanlýþý yaptýðýnýz için eðitiminiz baþarýsýz oldu." << endl;
					goto gitegos;
				}
			}
			zaman = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (zaman < 8)
			{
				cout << "Tebrikler! Çeviklik eðitimini baþarýyla tamamladýnýz." << endl;
				cout << "Bitirme süreniz: " << zaman << endl;
				cout << "Çeviklik +1" << endl;
				ceviklik = ceviklik + 1;
				goto gitegos;
			}
			else
			{
				cout << "Malesef eðitimi tamamlayamadýnýz." << endl;
				cout << "Bitirme süreniz: " << zaman << endl;
				goto gitegos;
			}

		}
	gitegos:
		cout << endl << "Sýrada zeka eðitimi var." << endl;
		cout << "-Zeka Eðitimi-\nKurallar: Verilen 4 tane 4 iþlem sorusunu doðru cevaplamaya çalýþmalýsýn.(Sayýlar rastgele belirlenmiþtir.)" << endl;
		cout << "Eðer sorularý çözmen 45 saniyeden uzun sürerse veya sorularý yanlýþ cevaplarsan eðitim baþarýsýz olur." << endl;
		cout << "Not: Zeka, diðer özelliklere göre kazanýlmasý daha zor bir özelliktir." << endl;
	gitsabaq:
		cout << "Baþla[1]" << endl;
		int banop;
		cin >> banop;
		cout << endl;
		if (banop != 1)
		{
			cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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
				cout << "Verdiðiniz cevap yanlýþ. Eðitimi tamamlayamadýnýz." << endl;
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
				cout << "Verdiðiniz cevap yanlýþ. Eðitimi tamamlayamadýnýz." << endl;
				goto gitartik;
			}
			random5 = rand() % 100 + 2;
			random6 = rand() % 10 + 2;
			cout << "Soru 3: " << random5 << "X" << random6 << "=";
			cin >> cevap3;
			cout << endl;
			if (cevap3 != random5 * random6)
			{
				cout << "Verdiðiniz cevap yanlýþ. Eðitimi tamamlayamadýnýz." << endl;
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
				cout << "Verdiðiniz cevap yanlýþ. Eðitimi tamamlayamadýnýz." << endl;
				goto gitartik;
			}
			zamanzeka = (clock() - start) / (double)CLOCKS_PER_SEC;
			if (zamanzeka > 45)
			{
				cout << "Size verilen sürenin üstüne çýktýnýz. Eðitimi tamamlayamadýnýz." << endl;
				cout << zamanzeka;
				goto gitartik;
			}
			cout << "Tebrikler! Zeka eðitimini baþarýyla tamamladýnýz." << endl;
			cout << "Bitirme süreniz: " << zamanzeka << endl;
			cout << "Zeka +1" << endl;
			zeka = zeka + 1;
			goto gitartik;
		}
	}
	if (aaa == 2)
	{
		cout << "Yabancý: Öðrenmenin sonu ölümün baþlangýcýdýr." << endl;
		goto gitartik;
	}
	gitartik:
	gitsilah:
	cout << endl << "Yabancý: Az vaktimiz kaldý, þu silahlardan birini seç." << endl;
	cout << "Paslanmýþ eski kýlýç(Güç:3 Çeviklik:3)[1]" << endl;
	cout << "Paslanmýþ eski gürz(Güç:5 Çeviklik : 1)[2]" << endl;
	cout << "Paslanmýþ eski balta(Güç:3 Çeviklik : 1)(rakibinizin saldýrýlarýnýzý engelleme ihtimali daha düþüktür)[3]" << endl;
	cout << "Paslanmýþ eski hançer(Güç:1 Çeviklik : 5)[4]" << endl;
	cout << "Paslanmýþ eski çift el baltasý(Güç:4 Çeviklik : 1)(rakibinizin saldýrýlarýnýzý engelleme ihtimali daha düþüktür)[5]" << endl;
	cout << "Paslanmýþ eski çift el Kýlýcý(Güç:4 Çeviklik : 2)[6]" << endl;
	cout << "Paslanmýþ eski balyoz:(Güç:6 Çeviklik:0)[7]"<< endl;
	int silahsec,silahguc=0,silahcev=0,zirhguc=0,zirhcev=0;
	string silah, zirh="Kuþanýlan bir zýrh yok";
	cin >> silahsec;
	cout << endl;
	if (silahsec < 1 || silahsec >7)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitsilah;
	}
	if (silahsec == 1)
	{
		silahguc = 3;
		silahcev = 3;
		cout << "Yabancý: Bir kýlýç ha! Demek bir gladyatör gibi savaþmak istiyorsun." << endl;
		silah = "Paslanmýþ eski kýlýç";
	}
	if (silahsec == 2)
	{
		silahguc = 5;
		silahcev = 1;
		cout << "Yabancý: Bir gürz ha! Demek düþmanlarýnýn kemiklerini kýrmak istiyorsun." << endl;
		silah = "Paslanmýþ eski gürz";
	}
	if (silahsec == 3)
	{
		silahguc = 3;
		silahcev = 1;
		cout << "Yabancý: Bir balta ha! Demek bir kuzeyli gibi savaþmak istiyorsun." << endl;
		silah = "Paslanmýþ eski balta";
	}
	if (silahsec == 4)
	{
		silahguc = 1;
		silahcev = 5;
		cout << "Yabancý: Bir hançer ha! Demek bir suikastçi gibi savaþmak istiyorsun." << endl;
		silah = "Paslanmýþ eski hançer";
	}
	if (silahsec == 5)
	{
		silahguc = 4;
		silahcev = 1;
		cout << "Yabancý: Bir balta ha! Demek bir kuzeyli gibi savaþmak istiyorsun." << endl;
		silah = "Paslanmýþ eski çift el baltasý";
	}
	if (silahsec == 6)
	{
		silahguc = 4;
		silahcev = 2;
		cout << "Yabancý: Bir kýlýç ha! Demek bir gladyatör gibi savaþmak istiyorsun." << endl;
		silah = "Paslanmýþ eski çift el Kýlýcý";
	}
	if (silahsec == 7)
	{
		silahguc = 6;
		silahcev = 0;
		cout << "Yabancý: Bir gürz ha! Demek düþmanlarýnýn kemiklerini kýrmak istiyorsun." << endl;
		silah = "Paslanmýþ eski balyoz";
	}
	cout << endl;
	cout << endl << "Yabancý: Artýk hazýrsýn " << irkisim << ". Eðer ikimiz de ölmez isek beni bir hafta sonra derin vadideki handa kumar masasýnda bul." << endl;
	cout << "Yabancý: Bol þans " << irkisim << ", bol þans!" << endl;
	cout << "(Gardiyanlar seni küçük arenaya götürür.)" << endl;
	cout << "(Bahis oynayýp baðýran insanlar bir çember oluþturmuþ, ortasýnda da mahkumlar savaþýyor.)" << endl;
	gitkaa:
	int gecicigucbuff=0, geciciceviklikbuff=0;
	int dusguc = 0, duscan=0, duskacinma, duskritik, dusceviklik = 0, dusminhasar = 0, dusmakshasar = 0, dussilahguc = 0, dussilahcev = 0, duszirhguc = 0, duszirhcev = 0,duszeka=0;
	string duszirh, dussilah;
	int i=0, a=0;
	int randomsavas, randomkacinma, randomkritik, kacindimi, randomhasar;
	int vurdugunhasar, vuruldugunhasar;
	cout << "Senden önceki mahkumlarýn savaþýný izle(savaþ mekaniðini anlatýr)[1]  Senin savaþýn baþlayana kadar gözünü kapatýp kendini hazýrla[2]" << endl;
	int kaa;
	cin >> kaa;
	cout << endl;
	if (kaa < 1 || kaa >2)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitkaa;
	}
	if (kaa == 1)
	{
		cout << "Oyunda basit bir savaþ sistemi vardýr.\nOyunda savaþ hamle hamle olur, hamle size geldiðinde saldýrma yolunuzu seçersiniz." << endl;
		cout << "Saldýrma yollarý:" << endl;
		cout << "Karakterin bacaklarýna saldýrma: %50 ihtimalle saldýrýnýz baþarýlý olur ve baþarýlý olduðu durumda 2 kat hasar vurursunuz ama baþarýsýz olursanýz ýskalamýþ olursunuz ve hasar vuramazsýnýz.\n";
		cout << " (Rakibinizin çevikliði sayesinde gelen kaçýnma ihtimali bu yüzdeye dahil deðil yani saldýrý bittikten ve baþarýlý olduktan sonra kaçýnma ihtimali hesaplanýr.)" << endl;
		cout << "Karakterin vücuduna saldýrma: %100 ihtimalle saldýrýnýz baþarýlý olur ve baþarýlý olduðunda normal hasarýnýzý vurursunuz." << endl;
		cout << "Karakterin kafasýna saldýrma: %10 ihtimalle saldýrýnýz baþarýlý olur ve baþarýlý olduðu durumda 10 kat hasar vurursunuz ama baþarýsýz olursanýz ýskalamýþ olursunuz ve hasar vuramazsýnýz.\n";
		cout << " (Rakibinizin çevikliði sayesinde gelen kaçýnma ihtimali bu yüzdeye dahil deðil yani saldýrý bittikten ve baþarýlý olduktan sonra kaçýnma ihtimali hesaplanýr.)" << endl << endl;
		goto gitaga;
	}
	if (kaa == 2)
	{
		cout << "(Nefes alýþýný düzenlersin. [Kýsa süreli güç+1]";
		gecicigucbuff=gecicigucbuff+1;
		cout << "Gardiyan: (Alaycý bir dille) Ne o, Þampiyonlar ligine mi çýkýcaksýn?\n(Kendi aralarýnda gülüþürler)" << endl;
		goto gitaga;
	}


	gituuu:
	gitaga:
	cout << "Zindan Görevlisi: " << irkisim << " senin sýran, bakalým nelerin varmýþ!" << endl;
	int secog;
	cout << "Kaçmaya çalýþ(%20 baþarý ihtimali)[1] Siz ýrkçý pisliklere nasýl savaþýlýr göstereceðim![2]" << endl;
	cin >> secog;
	cout << endl;
	if (secog < 1 || secog >2)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitaga;
	}
	if (secog == 1)
	{
		int kacissansi;
		kacissansi = rand() % 101 + 0;
		if (kacissansi <= 20)
		{
			cout << "Seni tutam gardiyanýn boynuna tüm gücünle vurduktan sonra, belindeki anahtarlarý aldýn." << endl;
			cout << "Anahtarla hemen yanýndaki kapýyý açýp çýktýktan sonra diðer zindancýlar üstüne koþarken kapýyý kilitledin ve anahtarý içine sokup kýrdýn." << endl;
			gitlala:
			cout << "Gardiyanlarýn tam suratýna orta parmak iþareti yap.[1]  Zaman yok, Kaç![2]" << endl;
			int lalala;
			cin >> lalala;
			cout << endl;
			if (lalala < 1 || lalala >2)
			{
				cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
				goto gitlala;
			}
			if (lalala == 1)
			{
				cout << "Sem gardiyanlara haraket yaparken içlerinden birisi parmaklarýklarýn arasýndan elini tutup parmaðýný kýrdý, ardýndan seni kendisine doðru çekip" << endl;
				cout << " hançeriyle karnýný deþti." << endl;
				cout << "Öldün!" << endl;
				gituna:
				cout << "Son kayýtlý yere dön[1] Ana menüye dön[2] Çýkýþ yap[3]" << endl;
				int lll;
				cin >> lll;
				cout << endl;
				if (lll < 1 || lll >3)
				{
					cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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
				cout << "Þansýna büyük kapý da açýktýr. Hemen dýþarý çýkarsýn ve karanlýðýn da yardýmý ile saklanýrsýn." << endl;
				cout << "Bir süre bekledikten sonra artýk seni aramýyorlardýr. Sonunda özgürsün." << endl;
				goto gitozgurluk;
			}
		}
		else 
		{
			cout << "Tam kaçmaya çalýþmadan önce gardiyan sende bir terslik olduðunu sezip elini silahýna attý, kaçmaya çalýþýnca ani davranýp boðazýný kesti." << endl;
			cout << "Ölmeden önce duyduðun son sözler: Ýyi savaþabileceðini düþünmüþtüm, ne hayal kýrýklýðý ama" << endl;
			cout << "Öldün!" << endl;
		gitlll:
			cout << "Son kayýtlý yere dön[1] Ana menüye dön[2] Çýkýþ yap[3]" << endl;
			int uuu;
			cin >> uuu;
			cout << endl;
			if (uuu < 1 || uuu >3)
			{
				cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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

		cout << endl << "Zorluk seviyesi seçiniz." << endl;
		gitzorluk:
		cout << "Kolay[1] Normal[2] Zor[3]" << endl;
		int zorluk, zorlukseviye;
		cin >> zorlukseviye;
		cout << endl;
		if (zorlukseviye < 1 || zorlukseviye >3)
		{
			cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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
		cout << "Rakibinin özelliklerine ve oranlarýna bak.[1]  Kendi özelliklerine ve oranlarýna bak.[2]  Savaþa baþla.[3]" << endl;
		cin >> savo;
		cout << endl << endl;
		srand(time(NULL));


		//düþman stats
		dusguc = 2;
		dusceviklik = 7;
		duszeka = 1;
		dussilah = "Bronz gürz";
		duszirh = "Paslý eski hafif zýrh";
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
			cout << "Irk: " << "Güneyli" << endl;
			cout << "Temel güç: " << dusguc << endl;
			cout << "Temel çeviklik: " << dusceviklik << endl;
			cout << "Temel zeka: " << duszeka << endl;
			cout << "Kuþanýlan silah: " << dussilah << endl;
			cout << "Kuþanýlan zýrh: " << duszirh << endl;
			cout << "Silah gücü: " << dussilahguc << endl;
			cout << "Silah çevikliði: " << dussilahcev << endl;
			cout << "Zýrh gücü: " << duszirhguc << endl;
			cout << "Zýrh çevikliði: " << duszirhcev << endl;
			cout << "Minimum hasar: " << (dusguc + duszirhguc + dussilahguc) << endl;
			cout << "Maksimum hasar: " << (dusguc + duszirhguc + dussilahguc) * 2 << endl;
			cout << "Can: " << (dusguc + duszirhguc + dussilahguc) * zorluk << endl;
			cout << "Kritik vuruþ ihtimali: " << (dusceviklik + dussilahcev + duszirhcev) * 2 << endl;
			cout << "Kaçýnma ihtimali: " << (dusceviklik + dussilahcev + duszirhcev) * 2 << endl;
			cout << endl;
			goto gityv;
		}
		if (savo == 2)
		{
			cout << "Irk: " << irkisim << endl;
			cout << "Temel güç: " << guc << endl;
			cout << "Temel çeviklik: " << ceviklik << endl;
			cout << "Temel zeka: " << zeka << endl;
			cout << "Kullanýlan Silah: " << silah << endl;
			cout << "Kullanýlan Zýrh: " << zirh << endl;
			cout << "Geçici güç buffu: " << gecicigucbuff << endl;
			cout << "Geçici çeviklik buffu: " << geciciceviklikbuff << endl;
			cout << "Silahýnýzýn gücü: " << silahguc << endl;
			cout << "Silahýnýzýn çevikliði: " << silahcev << endl;
			cout << "Zýrhýnýzýn gücü: " << zirhguc << endl;
			cout << "Zýrhýnýzýn çevikliði: " << zirhcev << endl;
			cout << "Minimum hasarýnýz: " << (guc + gecicigucbuff + zirhguc + silahguc) << endl;
			cout << "Maksimum hasarýnýz: " << (guc + gecicigucbuff + zirhguc + silahguc) * 2 << endl;
			cout << "Canýnýz: " << (guc + gecicigucbuff + zirhguc + silahguc) * 4 << endl;
			cout << "Kritik vuruþ ihtimaliniz: " << (ceviklik + geciciceviklikbuff + silahcev + zirhcev) * 2 << endl;
			cout << "Kaçýnma ihtimaliniz: " << (ceviklik + geciciceviklikbuff + silahcev + zirhcev) * 2 << endl;
			cout << endl;
			goto gityv;
		}
		if (savo == 3)
		{
			int lak;
			gitlak:
			cout << "Ýlk hamleyi yapmaya çalýþ.(%50 baþarý þansý)[1]" << endl;
			cout << "Ýlk hamlede savunma yap.(%60 baþarý þansý)(Baþarý halinde geçici çeviklik buff)[2]" << endl;
			cin >> lak;
			cout << endl;
			if (lak < 1 || lak > 2)
			{
				cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
				goto gitlak;
			}
			if (lak == 1)
			{
				int rastgeleko;
				rastgeleko = rand() % 100 + 1;
				if (rastgeleko <= 50)
				{
					cout << "Ufak bir boðuþmadan sonra ilk hamleyi yapma fýrsatý kazandýnýz!" << endl;
					i = 2;
				}
				if (rastgeleko > 50)
				{
					cout << "Malesef rakibiniz savaþa iyi baþladý. Ýlk hamle sýrasý rakipte." << endl;
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
					cout << "Baþarýlý bir þekilde savunma yaptýnýz ve hamle sýrasý size geçti, Geçici çeviklik +1." << endl;
					i = 2;
				}
				if (rastgeleb > 60)
				{
					cout << "Malesef rakibin hamlesini savunamadýnýz, ilk hamle þansýný kaybettiniz." << endl;
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
						cout << "Hamle sýrasý size geçti!" << endl;
						goto alba;
					}
					else
					{
						goto alba;
					}
					alba:
					gitagf:
					cout << "Rakibin vücuduna saldýr.(baþarý ihtimali %100, hasar 1x)[1]" << endl;
					cout << "Rakibin bacaklarýna saldýr.(baþarý ihtimali %50, hasar 2x)[2]" << endl;
					cout << "Rakibin kafasýna saldýr.(baþarý ihtimali %10, hasar 10x)[3]" << endl;
					int agf;
					cin >> agf;
					cout << endl;
					if (agf < 1 || agf > 3)
					{
						cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
						goto gitagf;
					}
					if (agf == 1)
					{
						cout << "Saldýrýnýz baþarýlý!" << endl;
						randomkacinma = rand() % 100 + 1;
						if (randomkacinma <= duskacinma)
						{
							cout << "Ama rakibiniz hamlenizden kaçýndý!" << endl;
							cout << "Düþmanýn caný: " << duscan << endl;
							kacindimi = 1;
							goto hamlebitti;
						}
						else
						{
							cout << "Rakibiniz hamlenizden kaçýnamadý!" << endl;
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
								cout << "Vurduðunuz hasar: " << vurdugunhasar << endl;
								cout << "Düþmanýn yeni caný: " << duscan << endl;
								goto hamlebitti;
							}
							else
							{
								vurdugunhasar = rand() % makshasar + 0;
								if (vurdugunhasar <= minhasar)
								{
									vurdugunhasar = vurdugunhasar + minhasar;
								}
								cout << "Kritik hasar vuramadýnýz!" << endl;
								duscan = duscan - vurdugunhasar;
								cout << "Vurduðunuz hasar: " << vurdugunhasar << endl;
								cout << "Düþmanýn yeni caný: " << duscan << endl;
								goto hamlebitti;
							}
						}
					}
					if (agf == 2)
					{
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 50)
						{
							cout << "Saldýrýnýz baþarýlý!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= duskacinma)
							{
								cout << "Ama rakibiniz hamlenizden kaçýndý!" << endl;
								cout << "Düþmanýn caný: " << duscan << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibiniz hamlenizden kaçýnamadý!" << endl;
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
									cout << "Vurduðunuz hasar: " << vurdugunhasar << endl;
									cout << "Düþmanýn yeni caný: " << duscan << endl;
									goto hamlebitti;
								}
								//Mutlu 1000 satýrlar!
								else
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Kritik hasar vuramadýnýz!" << endl;
									duscan = duscan - vurdugunhasar*2;
									cout << "Vurduðunuz hasar: " << vurdugunhasar << endl;
									cout << "Düþmanýn yeni caný: " << duscan << endl;
									goto hamlebitti;
								}
							}
						}
						else 
						{
							cout << "Saldýrýnýz baþarýsýz." << endl;
							cout << "Düþmanýn caný: " << duscan << endl;
							goto hamlebitti;
						}
					}
					if (agf == 3)
					{
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 10)
						{
							cout << "Saldýrýnýz baþarýlý!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= duskacinma)
							{
								cout << "Ama rakibiniz hamlenizden kaçýndý!" << endl;
								cout << "Düþmanýn caný: " << duscan << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibiniz hamlenizden kaçýnamadý!" << endl;
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
									cout << "Vurduðunuz hasar: " << vurdugunhasar << endl;
									cout << "Düþmanýn yeni caný: " << duscan << endl;
									goto hamlebitti;
								}
								else
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Kritik hasar vuramadýnýz!" << endl;
									duscan = duscan - vurdugunhasar * 10;
									cout << "Vurduðunuz hasar: " << vurdugunhasar << endl;
									cout << "Düþmanýn yeni caný: " << duscan << endl;
									goto hamlebitti;
								}
							}
						}
						else
						{
							cout << "Saldýrýnýz baþarýsýz." << endl;
							cout << "Düþmanýn caný: " << duscan << endl;
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
						cout << "Düþmanýnýz bacaðýnýza saldýrmaya çalýþtý!" << endl;
						cout << "Düþmanýn saldýrýsý baþarýlý!" << endl;
						randomkacinma = rand() % 100 + 1;
						if (kacinma <= kacinma)
						{
							cout << "Ama düþmanýn hamlensinden kaçýndýnýz!" << endl;
							cout << "Canýnýz: " << can << endl;
							kacindimi = 1;
							goto hamlebitti;
						}
						else
						{
							cout << "Rakibinizin hamlesinden kaçýnamadýnýz!" << endl;
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
								cout << "Yediðiniz hasar: " << vurdugunhasar << endl;
								cout << "Yeni canýnýz: " << can << endl;
								goto hamlebitti;
							}
							else
							{
								vurdugunhasar = rand() % dusmakshasar + 0;
								if (vurdugunhasar <= dusminhasar)
								{
									vurdugunhasar = vurdugunhasar + dusminhasar;
								}
								cout << "Düþman kritik hasar vuramadý!" << endl;
								can = can - vurdugunhasar;
								cout << "Yediðiniz hasar: " << vurdugunhasar << endl;
								cout << "Yeni canýnýz: " << can << endl;
								goto hamlebitti;
							}
						}
					}
					if (agf > 40 && agf <= 90 )
					{
						cout << "Düþmanýnýz bacaðýnýza saldýrmaya çalýþtý!" << endl;
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 50)
						{
							cout << "Düþmanýnýzýn saldýrýsý baþarýlý!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= kacinma)
							{
								cout << "Ama rakibiniziz hamlesinden kaçýndýnýz!" << endl;
								cout << "Canýnýz: " << can << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibiniz hamlenizden kaçýnamadý!" << endl;
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
									cout << "Yediðiniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni canýnýz: " << duscan << endl;
									goto hamlebitti;
								}
								else
								{
									vurdugunhasar = rand() % dusmakshasar + 0;
									if (vurdugunhasar <= dusminhasar)
									{
										vurdugunhasar = vurdugunhasar + dusminhasar;
									}
									cout << "Düþmanýnýz Kritik hasar vuramadý!" << endl;
									can = can - vurdugunhasar * 2;
									cout << "Yediðiniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni canýnýz: " << can << endl;
									goto hamlebitti;
								}
							}
						}
						else
						{
							cout << "Düþmanýnýn saldýrýsý baþarýsýz." << endl;
							cout << "Canýnýz: " << can << endl;
							goto hamlebitti;
						}
					}
					if (agf > 90 && agf <= 100)
					{
						cout << "Düþmanýnýz kafanýza saldýrmaya çalýþtý!" << endl;
						randomsavas = rand() % 100 + 1;
						if (randomsavas <= 10)
						{
							cout << "Rakibinizin saldýrýsý baþarýlý!" << endl;
							randomkacinma = rand() % 100 + 1;
							if (randomkacinma <= kacinma)
							{
								cout << "Ama rakibinizin hamlesinden kaçýndýnýz!" << endl;
								cout << "Canýnýz: " << can << endl;
								kacindimi = 1;
								goto hamlebitti;
							}
							else
							{
								cout << "Rakibinizin hamlesinden kaçýnamadýnýz!" << endl;
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
									cout << "Yediðiniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni canýnýz: " << can << endl;
									goto hamlebitti;
								}
								else
								{
									vurdugunhasar = rand() % makshasar + 0;
									if (vurdugunhasar <= minhasar)
									{
										vurdugunhasar = vurdugunhasar + minhasar;
									}
									cout << "Rakibiniz kritik hasar vuramadý!" << endl;
									can = can - vurdugunhasar * 10;
									cout << "Yediðiniz hasar: " << vurdugunhasar << endl;
									cout << "Yeni canýnýz: " << can << endl;
									goto hamlebitti;
								}
							}
						}
						else
						{
							cout << "Rakibinizin saldýrýsý baþarýsýz." << endl;
							cout << "Canýnýz: " << can << endl;
							goto hamlebitti;
						}
					}
				}
				hamlebitti:
				cout << endl;
			}
			if (can <= 0)
			{
				cout << "Öldün!" << endl;
			gitane:
				cout << "Son kayýtlý yere dön[1] Ana menüye dön[2] Çýkýþ yap[3]" << endl;
				int ppp;
				cin >> ppp;
				cout << endl;
				if (ppp < 1 || ppp >3)
				{
					cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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
			cout << "Kazandýn!" << endl;
			cout << "Etraf kan ve rakibinin iç organýyla dolu, etrafýnda insanlarýn yarýsý heyecandan baðýrýyor diðer yarýsý ile kaybettikleri bahisleri dolayýsýyla somurtuyor." << endl;
			cout << "Gardiyan: Tebrikler genç " << irkisim << " açýkçasý senden böyle bir performans beklemiyordum! Beni ve burdaki herkesi þaþýrttýn." << endl;
			cout << "Gardiyan: Ýþte, artýk özgürsün. Eðer canýn tekrar insanlarý doðramak isterse beni nerede bulabileceðini biliyorsun." << endl;
			cout << "Gardiyan: Hem kazanýlan bahisin de %20sini alýrsýn! Yolun açýk olsun." << endl;
			cout << "Aðrýlar içinde dýþarý çýkarsýn. Hava karanlýktýr." << endl;
			goto gitozgurluk;
		}
	}
	gitozgurluk:
	cout << endl;
	cout << "Hava karanlýk, etraf samanlýk civarda sadece köye giden bir yol var." << endl;
	cout << "Ne yapmak istersin?" << endl;
	gitnapcan:
	cout << "Yoldan hana doðru git[1]  Samanlýklara, hiçliðe doðru git[2]" << endl;
	int napcan;
	cin >> napcan;
	cout << endl;
	if (napcan < 1 || napcan >2)
	{
		cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
		goto gitnapcan;
	}
	else 
	{
		cout << "Oyunun demo sürümünün sonuna geldiniz." << endl;
		cout << "Oyunumu oynadýðýnýz için teþekkürler." << endl;
		cout << "Eðer feedback vermek istiyorsanýz mail adresim: berkcan112233@gmail.com" << endl;
		gitdemo:
		cout << "Ana menüye dön.[1]  Çýkýþ yap.[2]" << endl;
		int demo;
		cin >> demo;
		if (demo < 1 || demo >2)
		{
			cout << "Lütfen geçerli sayýlar arasýnda seçim yapýnýz." << endl << endl;
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