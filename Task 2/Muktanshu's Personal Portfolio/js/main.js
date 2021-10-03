let index = 0;
const totalWorkItems = $(".work-item").length;

$(window).on("load", function() {
    $(".preloader").addClass("loaded");
});

$(document).ready(function() {
    $(".nav-toggle").click(function() {
        $(".header .nav").slideToggle();
    });
    $(".header .nav a").click(function() {
        if ($(window).width() < 768) {
            $(".header .nav").slideToggle();
        }
    });

    $(window).scroll(function() {
        if ($(this).scrollTop() > 100) {
            $(".header").addClass("fixed");
        } else {
            $(".header").removeClass("fixed");
        }
    });

    $("a").on("click", function(event) {
        if (this.hash !== "") {
            event.preventDefault();
            var hash = this.hash;
            $("html, body").animate({
                    scrollTop: $(hash).offset().top,
                },
                800,
                function() {
                    window.location.hash = hash;
                }
            );
        }
    });
});

var i = 0,
    a = 0,
    isBackspacing = false,
    isParagraph = false;

var textArray = [
    "WEB DEVELOPER",
    "COMPETETIVE CODER",
    "UI/UX DESIGNER",
];

var speedForward = 100,
    speedWait = 1000,
    speedBetweenLines = 1000,
    speedBackspace = 25;

typeWriter("output", textArray);

function typeWriter(id, ar) {
    var element = $("#" + id),
        aString = ar[a],
        eHeader = element.children("h1"),
        eParagraph = element.children("p");

    if (!isBackspacing) {
        if (i < aString.length) {
            if (aString.charAt(i) == "|") {
                isParagraph = true;
                eHeader.removeClass("cursor");
                eParagraph.addClass("cursor");
                i++;
                setTimeout(function() {
                    typeWriter(id, ar);
                }, speedBetweenLines);
            } else {
                if (!isParagraph) {
                    eHeader.text(eHeader.text() + aString.charAt(i));
                } else {
                    eParagraph.text(eParagraph.text() + aString.charAt(i));
                }
                i++;
                setTimeout(function() {
                    typeWriter(id, ar);
                }, speedForward);
            }
        } else if (i == aString.length) {
            isBackspacing = true;
            setTimeout(function() {
                typeWriter(id, ar);
            }, speedWait);
        }
    } else {
        if (eHeader.text().length > 0 || eParagraph.text().length > 0) {
            if (eParagraph.text().length > 0) {
                eParagraph.text(
                    eParagraph.text().substring(0, eParagraph.text().length - 1)
                );
            } else if (eHeader.text().length > 0) {
                eParagraph.removeClass("cursor");
                eHeader.addClass("cursor");
                eHeader.text(eHeader.text().substring(0, eHeader.text().length - 1));
            }
            setTimeout(function() {
                typeWriter(id, ar);
            }, speedBackspace);
        } else {
            isBackspacing = false;
            i = 0;
            isParagraph = false;
            a = (a + 1) % ar.length;
            setTimeout(function() {
                typeWriter(id, ar);
            }, 50);
        }
    }
}