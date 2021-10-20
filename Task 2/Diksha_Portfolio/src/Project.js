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
                    <h1 class="myname">Diksha Chaudhari</h1>
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
                                1 . Tourism Website
                                </h2>
                            <div>
                            </div>
                            <p class ="skills" style={{textAlign:'justify'}}>
                            An codeigniter framework has been used to create Dynamic website that contain tourism <br/>
                            related detailed information that can be managed by the owner.
                            </p>
                            <h2 class="myskills">Project domain and tools</h2>
                            <ul class="skills">
                            <li>
                                Codeigniter , Bootstrap , JavaScript , Apache Server , Git
                            </li>
                            <li>
                                Html/Css , Search Engine Optimization , Cloud Storage 
                            </li>
                        </ul>
                        <br/>
                        <div>
                        <img src="assets/ss1.png"
                        width="650px"
                        height="280px"></img>
                        </div><br/><br/>
                      </div>
                    </div>

                    <div class="row">
                            <div class="col-sm-12">
                                <h2 class="myskills" style={{textAlign:"justify"}}>
                                2 . Staff Management System
                                </h2>
                            <div>
                            </div>
                            <p class ="skills" style={{textAlign:'justify'}}>
                            This is a Staff management system application created using
                            asp.net technology and microsoft sql<br/>Server that manages staff
                            entries and sends emails as per requirement .
                            </p>
                            <h2 class="myskills">Project domain and tools</h2>
                            <ul class="skills">
                            <li>
                               Asp.Net , Sql Server , Microsoft Visual Studio 
                            </li>
                        </ul>
                        <br/>
                        <div>
                        <img src="assets/ss2.png"
                        width="650px"
                        height="280px"></img>
                        </div><br/><br/>
                      </div>
                    </div>
                    
                  </div>

                  <div class="jumbotron text-center" id="footer">
                <ul class="nav justify-content-center">
                    <li class="nav-item">
                        <a href="https://www.linkedin.com/in/diksha-chaudhari-b4020a191/"
                        class="fa fa-linkedin nav-link"
                        style={{color:"blue"}}></a>
                    </li>
                    <li class="nav-item">
                        <a href="https://www.twitter.com/diksha__4"
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