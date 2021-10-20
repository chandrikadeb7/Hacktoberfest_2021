import React from 'react';
import ReactDOM from 'react-dom';
// import './index.css';
// import App from './App';
import reportWebVitals from './reportWebVitals';
import{
  BrowserRouter as Router,
  Route,
  Link,
  NavLink,
  Switch 
}from "react-router-dom"

import Home from"./Home";
import Project from"./Project";
import Contact from"./Contact";

const routing=(
  <Router>
    <div>
      <Switch>
        <Route exact path="/" component={Home}/>
        <Route path="/project" component={Project}/>
        <Route path="/contact" component={Contact}/>
      </Switch>
    </div>
  </Router>
);

ReactDOM.render(routing,document.getElementById('root'));

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
