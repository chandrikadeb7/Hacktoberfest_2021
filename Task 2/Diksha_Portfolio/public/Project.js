import React from 'react';
import reactDom from 'react-dom';

import{
    BrowserRouter as Router,
    Route,
    Link,
    NavLink,
    Switch 
}from "react-router-dom"

import "./index.css";
class Project extends React.Component {
    constructor(){
        super();
    }
    render(){
        return (
            <div class="heading">
                    <div class="jumbotron text-center" id="heading">
                    <h1 class="myname">diksha</h1>
                    <p class="myoccupation">Software Developer</p>
                    <ul class="nav nav-pills nav-justified" id="navigation">
                        <li class="nav-item">
                            <a class="nav-link active" href="/">
                                Home
                            </a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="/project">
                                Project
                            </a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="/youtube">
                                Youtube
                            </a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="/contact">
                                contact
                            </a>
                        </li>
                    </ul>
                </div>
                    

                    <div class="container">
                        <div class="row">
                            <div class="col-sm-12">
                                <h2 class="myskills" style={{textAlign:"justify"}}>
                                    web application for recruiters to shortlist best candidate
                                </h2>
                            <div>
                            </div>
                            <p class ="skills" style={{textAlign:'justify'}}>
                                general information related projects
                            </p>
                            <h2 class="myskills">Project domain and tools</h2>
                            <p class="skills">
                                This application is developed using following programming and tools
                            </p>
                            <ul class="skills">
                            <li>
                                Front End languages = HTML , CSS , javascript , React JS
                            </li>
                            <li>
                                Back End languages = C++ , Java , Node JS
                            </li>
                            <li>
                                Databases = MySQL , Oracle
                            </li>
                        </ul>
                        <ul class ="nav nav-pills justify-content-center">
                            <li class="nav-item">
                                <a class="nav-link active">
                                    href={
                                        "https://github.com/"
                                    }
                                </a>
                            </li>
                        </ul>
                        <br/>
                      </div>
                    </div>
                  </div>

                  <div class="jumbotron text-center" id="footer">
                <ul class="nav justify-content-center">
                    <li class="nav-item">
                        <a href="https://www.linkedin.com/"
                        class="fa fa-linkedin nav-link"
                        style={{color:"blue"}}></a>
                    </li>
                    <li class="nav-item">
                        <a href="https://www.twitter.com/diksha_4"
                        class="fa fa-twitter nav-link"
                        style={{color:"blue"}}></a>
                    </li>
                    <li class="nav-item">
                        <a href="https://github.com/dikshachaudhari4"
                        class="fa fa-github nav-link"
                        style={{color:"blue"}}></a>
                    </li>

                </ul>
            </div>


               </div>
        );
    }
}
export default Project;