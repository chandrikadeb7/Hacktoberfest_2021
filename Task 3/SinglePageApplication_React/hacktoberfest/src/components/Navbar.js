import React from 'react'

const Navbar = () => {
  return (
    <>

      <header className="text-gray-600 body-font">
        <div className="container mx-auto flex flex-wrap p-5 flex-col md:flex-row items-center">
          <a className="flex title-font font-medium items-center text-gray-900 mb-4 md:mb-0" href="/">
            <svg xmlns="http://www.w3.org/2000/svg" className="w-10 h-10 text-white p-2 bg-red-500 rounded-full" fill="none" viewBox="0 0 24 24" stroke="currentColor">
              <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M10 20l4-16m4 4l4 4-4 4M6 16l-4-4 4-4" />
            </svg>
            <span className="ml-3 text-xl">HacktoberFest_2021</span>
          </a>
          <nav className="md:mr-auto md:ml-4 md:py-1 md:pl-4 md:border-l md:border-gray-400	flex flex-wrap items-center text-base justify-center">
            <a className="mr-5 hover:text-gray-900" href="/">Home</a>
            <a className="mr-5 hover:text-gray-900" href="/tasks">Tasks</a>
            <a className="mr-5 hover:text-gray-900" href="https://github.com/sponsors/chandrikadeb7">Become a sponsor</a>
          </nav>
          <button className="inline-flex items-center bg-red-500 border-2 py-1 px-3 focus:outline-none hover:bg-white hover:text-red-500 rounded text-white mt-4 md:mt-0">Contribute to our repo
            <svg fill="none" stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="2" className="w-4 h-4 ml-1" viewBox="0 0 24 24">
              <path d="M5 12h14M12 5l7 7-7 7"></path>
            </svg>
          </button>
        </div>
      </header>


    </>
  )
}

export default Navbar;
