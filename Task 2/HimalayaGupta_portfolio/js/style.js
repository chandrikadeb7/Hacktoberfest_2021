var intro = document.querySelectorAll('.anim')
        observer = new IntersectionObserver((entries) => {
            //console.log(entries)
            entries.forEach(entry => {
                if (entry.intersectionRatio > 0) {
                    entry.target.style.animation =
                        `${entry.target.dataset.type} ${entry.target.dataset.delay} forwards`
                } else {
                    entry.target.style.animation = 'none'
                }
            })

            //console.log(entries[0].target)
        })
        intro.forEach(one => {
            observer.observe(one)
        })
        var intro2 = document.querySelectorAll('.anim2')
        observer2 = new IntersectionObserver((entries) => {
            entries.forEach(entry => {
                if (entry.intersectionRatio > 0) {
                    entry.target.style.animation =
                        `${entry.target.dataset.type} ${entry.target.dataset.delay} forwards`
                } else {
                    entry.target.style.animation = 'none'
                }
            })

            //console.log(entries[0].target)
        })
        intro2.forEach(one => {
            observer2.observe(one)
        })