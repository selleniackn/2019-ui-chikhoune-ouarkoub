open Score;
type state = {
    loggedIn: bool
};

type action =
  | LogIn
  
 
 

let component = ReasonReact.reducerComponent("Login");

let make =  (/*~greeting,*/ _children)n => {
  
  ...component,

  initialState: () => {loggedIn: false},

  /* State transitions */
  reducer: (action, state) =>
    switch (action) {
    | LogIn => ReasonReact.Update({...state, loggedIn: !state.loggedIn})
    },

  render: self => {
    let message =
      "You're loggedIn " ;
    <div>
      <button onClick=(_event => self.send(LogIn))>
        (ReasonReact.string(message))
      </button>
     /* <button onClick=(_event => self.send(Toggle))>
        (ReasonReact.string("Toggle greeting"))
      </button>
      (
        self.state.loggedIn
          ? ReasonReact.string(greeting)
          : ReasonReact.null
      )*/
    </div>;
  },
};