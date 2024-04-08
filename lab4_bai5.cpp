#include <iostream>
#include <array>


struct Ngay {
    int ngay;
    int thang;
    int nam;
};


struct Thoitiet {
    Ngay ngay;
    double nhiet_do_cao_nhat;
    double nhiet_do_thap_nhat;
    double toc_do_gio_lon_nhat;
};


Ngay nhiet_do_cao_nhat_trong_thang(Thoitiet arr_thoi_tiet[], int so_ngay) {
    Ngay ngay_cao_nhat = { 0, 9, 2012 };
    double nhiet_do_cao_nhat = -999.0;

    for (int i = 0; i < so_ngay; ++i) {
        if (arr_thoi_tiet[i].ngay.thang == 9 && arr_thoi_tiet[i].ngay.nam == 2012) {
            if (arr_thoi_tiet[i].nhiet_do_cao_nhat > nhiet_do_cao_nhat) {
                nhiet_do_cao_nhat = arr_thoi_tiet[i].nhiet_do_cao_nhat;
                ngay_cao_nhat = arr_thoi_tiet[i].ngay;
            }
        }
    }

    return ngay_cao_nhat;
}

int main() {
  
    const int so_ngay = 365; 
    Thoitiet arr_thoi_tiet[so_ngay];

  
  
    Ngay ngay_cao_nhat = nhiet_do_cao_nhat_trong_thang(arr_thoi_tiet, so_ngay);
    std::cout << "Ngay co nhiet do cao nhat trong thang 9 nam 2012 la: " << ngay_cao_nhat.ngay << "/" << ngay_cao_nhat.thang << "/" << ngay_cao_nhat.nam << std::endl;

    return 0;
}
