var swiperSlide = document.getElementsByClassName('swiper-slide')

function changeHeight() {
    for (var i = 0; i < swiperSlide.length; i++) {
        var box = swiperSlide[i].querySelector('.box')
        var content = box.querySelector(".content")
        if (swiperSlide[i].classList.contains('swiper-slide-active')) {
            content.style.height = "100%"
            content.style.borderRadius = "8px"
            // console.log(box, 'added')
        } else {
            content.style.height = "18%"
            content.style.borderRadius = "0px 0px 8px 8px"
            // console.log(box, 'removed')
        }
    }
        
    setTimeout(changeHeight, 2000);

}
changeHeight()
// WELL DONE HIMALAYA !!!! 😊